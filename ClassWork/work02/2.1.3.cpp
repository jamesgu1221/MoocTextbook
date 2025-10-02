#include <iostream>

using namespace std;

int main()
{
    int num, x1, x2, x3, x4, x5;
    cin >> num;

    x1 = num / 10000;
    x2 = (num % 10000) / 1000;
    x3 = (num % 1000) / 100;
    x4 = (num % 100) / 10;
    x5 = num %10;

    if (x1 == x5)
        if (x2 == x4) cout << "Yes";
        else cout << "No";
    else cout << "No";



    return 0;
}