#include <iostream>

using namespace std;

int main()
{

    int arr[1000]={0};
    int x, num=0;
    while(cin >> x){
        bool flag=1;
        for(int i=0; i<num; i++){
            if (arr[i] == x) flag = 0;
        }
        if(flag){
            arr[num]=x;
            num++;
        }
    }

    cout << num << ' ';
    for (int i=0; i<num; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}