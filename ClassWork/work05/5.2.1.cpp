#include <iostream>
#include <cstring>

using namespace std;

int FindCenter(originalText[10000]){
    for (int i=0; i)

}



int main()
{
    char get[250][81] = {0};
    char x;
    int lineCount = 0;
    char originalText[10000] = {0};

    //按行输入到二维数组get用于最终输出
    //将输入拼接到originalText用于查找回文
    for(int i=0; i<250; i++){
        cin.getline(get[i], 81);
        lineCount++;   //统计总行数
        strcat(originalText, get[i]);
    }
    return 0;
}