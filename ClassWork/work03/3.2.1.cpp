#include <iostream>

using namespace std;

int main()
{

    int a, b, tmp=0, total=0;
    cin >> a >> b;
    bool flag = false;

    if (b>3000) b=3000;

    for(int i=a; i<=b; i++){
        total=0;
        int num = i;
        while(num>0){
            tmp = num%10;
            total += tmp*tmp*tmp;
            num /= 10;
        }
        if (total==i){
            cout << i << ' ';
            flag = true;
        }
    }
    if(!flag) cout << "no" << endl;
    return 0;
}