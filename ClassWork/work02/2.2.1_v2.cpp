#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool flip = false;
    if (a < b){
        int tem = b;
        b = a;
        a = tem;
        flip = true;

    }

    bool win, progress, illegal;
    win = (a == 11 && b < 10) || (a > 11 && a-b ==2);
    progress = (a < 11) || (a >= 11 && a-b < 2);
    illegal = (a > 11 && a-b > 2);

    if (win){
        if (flip) cout << "B win";
        else cout << "A win";
    }
    if (progress) cout << "In progress";
    if (illegal) cout << "Illegal";



    return 0;
}