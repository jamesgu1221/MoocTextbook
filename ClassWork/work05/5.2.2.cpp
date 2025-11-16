#include <iostream>

using namespace std;


//点击(lightRow, lightCol)位置的灯
void Delight(int *light, int lightRow, int lightCol){
    int *p = light + 5*lightRow + lightCol;
    *p *= -1;               //改变自己
    if (lightCol >= 1){     //改变左边格子
        *(p-1) *= -1;      
    }
    if (lightCol <= 3){     //改变右边格子
        *(p+1) *= -1;
    }
    if(lightRow >= 1){      //改变上方格子
        *(p-5) *= -1;
    }
    if(lightRow <= 3){      //改变下方格子
        *(p+5) *= -1;
    }
}

//判断是否全部点亮
bool IsEnd(int *light){
    bool flag = true;
    for(int i=0; i<25; i++){
        if (*(light + i) == -1){
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    //创建并输入灯光状态
    int light[5][5] = {0};
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            char c;
            cin >> c;
            if(c == '0'){
                light[i][j] = -1;
            }
            else{
                light[i][j] = 1;
            }
        }
    }

    int min_step = 33;
    int tmp_light[5][5] = {0};
    for(int i=0; i<32; i++){        //遍历第一行点击情况

        for (int r=0; r<5; r++){    //创建和light一样的临时数组tmp_light
            for (int j=0; j<5; j++){
                tmp_light[r][j] = light[r][j];
            }
        }

        int currentStep = 0;

        for(int k=0; k<5; k++){     //按照i对应的方式点亮第一行
            if( (i>>k) & 1){
                Delight(&tmp_light[0][0], 0, k);
                currentStep++;
            }
        }

        for (int j=1; j<5; j++){        //遍历行，目前为第j行
            for (int k=0; k<5; k++){    //遍历列，目前为第k列
                if(tmp_light[j-1][k] == -1){    //若上一行第k列未点亮，点亮该行第k列
                    Delight(&tmp_light[0][0], j, k);
                    currentStep++;
                }
            }
        }

        if(IsEnd(&tmp_light[0][0])){
            if(currentStep < min_step){
                min_step = currentStep;
            }
        }
    }

    //输出结果
    if (min_step == 33) cout << "-1";
    if (min_step <= 32) cout << min_step;
    return 0;
}