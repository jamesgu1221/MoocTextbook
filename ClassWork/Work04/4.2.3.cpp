#include <iostream>

using namespace std;

int main()
{

    char ch[100]={0};
    cin.getline(ch, 100);
    bool IsAppear[26]={0};
    int total[100]={0};
    int j=0;

    for(int i=0; ch[i]!='\0'; i++){
        int sequence = ch[i]-'a';
        if(IsAppear[sequence]){
            for(int i=0; i<26; i++){
                IsAppear[i] = 0;
            }
            j++;
            total[j] = 1;
            IsAppear[sequence] = true;
        } 
        if(!IsAppear[sequence]) {
            IsAppear[sequence] = true;
            total[j]++;
        }
    }


    int out=0;
    for (int i=0; i<100; i++){
        if(total[i]>out) out = total[i];
    }

    cout << out;

    return 0;
}