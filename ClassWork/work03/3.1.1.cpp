#include <iostream>

using namespace std;

int main()
{

    int f0=0, f1=1, f=0, i=1, n;
    cin >> n;
    if (n==1) f=1;
    else {while (i<n){
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
        }
    }
    cout << f << endl;
    return 0;
}