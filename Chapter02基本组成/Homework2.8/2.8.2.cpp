#include <iostream>

using namespace std;

int main()
{
    int x1, x2, q, l;

    cin >> x1 >> x2;

    q = x1 / x2;
    l = x1 % x2;

    cout << q << l;

    return 0;
}