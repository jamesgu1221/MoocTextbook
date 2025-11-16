#include <iostream>
#include <cstring>

using namespace std;

//判断是否是字母
bool IsAlpha(int sec){
    if (sec >= 'a' && sec <= 'z' || sec >= 'A' && sec <= 'Z'){
        return true;
    }
    else return false;
}

//大写转小写
void TransShift(char *cutText, int totalAlpha){
    for(int i=0; i<totalAlpha; i++){
        if(cutText[i] >= 'A' && cutText[i] <= 'Z'){
            cutText[i] += 32;
        }
    }
}


int main()
{
    int totalCin = 0;
    //输入初始文本，字符总数存储在totalCin中
    char originalText[10001] = {0};
    char temp;
    while(true){
        temp = cin.get();
        if(temp == EOF){
            break;
        }
        else {
            originalText[totalCin] = temp;
            totalCin++;
        }
    }
    
    //裁剪初始文本，只保留字母，字母总数保存在totalAlpha中
    //mapToOriginal中第i个元素的值为cutText中第i个元素在originalText中的位置
    char cutText[10001] = {0};
    int mapToOriginal[10001] = {0};
    int totalAlpha = 0;
    for (int i=0; i<totalCin; i++){
        if(IsAlpha(originalText[i])){
            cutText[totalAlpha] = originalText[i];
            mapToOriginal[totalAlpha] = i;
            totalAlpha++;
        }
    }

    TransShift(cutText, totalAlpha);


    int maxLen = 0;
    int bestLeft, bestRight;
    //寻找奇数回文(中心为aba)
    for(int i=0; i<totalAlpha; i++){
        int left = i, right = i;
        while(left>=0 && right<totalAlpha && cutText[left] == cutText[right]){
            int currentLen = right - left + 1;
            if(currentLen > maxLen) {
                maxLen = currentLen;
                bestLeft = left;
                bestRight = right;
            }
            right++;
            left--;
        }
    }

    //寻找偶数回文(中心为abba)
    for(int i=0; i<totalAlpha; i++){
        int left = i, right = i + 1;
        while(left>=0 && right<totalAlpha && cutText[left] == cutText[right]){
            int currentLen = right - left + 1;
            if(currentLen > maxLen) {
                maxLen = currentLen;
                bestLeft = left;
                bestRight = right;
            }
            right++;
            left--;
        }
    }

    //寻找最长字符串在原文中的位置
    int originalLeft = mapToOriginal[bestLeft];
    int originalRight = mapToOriginal[bestRight];

    //输出原文
    cout << maxLen << endl;
    for (int i = originalLeft; i <= originalRight; i++){
        cout << originalText[i];
    }
}