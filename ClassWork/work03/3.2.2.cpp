#include <iostream>

using namespace std;

int main()
{
    int m, n, tmp;
    cin >> m >> n;

    while(m>0){
        tmp = n%m;
        n=m;
        m=tmp;
    }
    cout << n;



    return 0;
}