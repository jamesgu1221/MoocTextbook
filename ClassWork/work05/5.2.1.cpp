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
void TransShift(char CutText[10000], int TotalAlpha){
    for(int i=0; i<TotalAlpha; i++){
        if(CutText[i] >= 'A' && CutText[i] <= 'Z'){
            CutText[i] += 32;
        }
    }
}

//判断是否是奇数回文中心 
bool IsOddCenter(){
    
}




int main()
{

    int TotalCin = 0;
    //输入初始文本
    char OriginalText[10001] = {0};
    for (int i=0; i<10000; i++){
        cin >> OriginalText[i];
        TotalCin++;
    }
    
    //裁剪初始文本，只保留字母，字母总数保存在TotalAlpha中
    char CutText[10001] = {0};
    int TotalAlpha = 0;
    for (int i=0; i<10000; i++){
        if(IsAlpha(OriginalText[i])){
            CutText[TotalAlpha] = OriginalText[i];
            TotalAlpha++;
        }
    }

    TransShift(CutText, TotalAlpha);



}