#include <iostream>

using namespace std;

int main()
{
    int a, b, c, m, n;

    cin >> a >> b >> c;

    if (b > a) {
        m = a;
        a = b;
        b = m;}
    else if (c > b)
            if (a > c){
                m = b;
                b = c;
                c = m;
            }
            else {
                m = a;
                n = b;
                a = c;
                b = m;
                c = n;
            }

    cout << a << " " << b << " " << c;


    return 0;
}