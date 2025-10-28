#include <iostream>

using namespace std;

int main()
{
    int n;
    int eng=0, num=0, other=0;
    char ch[10][80];


    cin >> n;
    cin.ignore();
    for (int i=0; i<n; i++){
        cin.getline(ch[i], 80);
        for (int j=0; ch[i][j]!='\0'; j++){
            char cur = ch[i][j];
            if(cur>='0' && cur<='9') num++;
            else if(cur>='A' && cur<='Z') eng++;
            else if(cur>='a' && cur<='z') eng++;
            else if(cur==' ');
            else other++;
        }
    }

    cout << "英文字母：" << eng << endl;
    cout << "数字：" << num << endl;
    cout << "其他字符："<< other << endl;

    return 0;
}