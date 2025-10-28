#include <iostream>

using namespace std;

int main()
{

    int i, seq=0, num=0;
    int lf = '0';
    int rf = '9';
    char ch[80];
    int arr[80]={0};
    cin.getline(ch, 80);
    for (i=0; ch[i]!='\0'; i++){
        if(ch[i]>=lf && ch[i]<=rf){
            arr[seq] = ch[i]-lf;
            seq++;
        }
    }

    for(i=0; i<seq; i++){
        num *=10;
        num += arr[i];
    }
    int last = 2*num;
    cout << last;
    return 0;
}