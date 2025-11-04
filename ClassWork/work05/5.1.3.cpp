#include <iostream>

using namespace std;

//求最大公因数

int Gcd(int a, int b){
    if(a < b) {
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }

    if(a == b) return b;
    else {
        a = a-b;
        return Gcd(a, b);
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Gcd(a, b) << endl;

    return 0;
}

