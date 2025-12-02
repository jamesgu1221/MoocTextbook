#include <iostream>

using namespace std;

struct cmpx {
    int lh;
    int rh;
};

void outNum (cmpx num)
{
    if (num.lh == 0 && num.rh != 0) {
        cout << num.rh << 'i' << endl;
    } else {
        cout << num.lh;
        if (num.rh > 0) {
            cout << '+' << num.rh << 'i' << endl;
        }
        if (num.rh < 0) {
            cout << num.rh << 'i' << endl;
        }
    }
    
}

cmpx mult (cmpx x, cmpx y)
{
    cmpx out;
    out.lh = x.lh * y.lh - x.rh * y.rh;
    out.rh = x.lh * y.rh + x.rh * y.lh;
    return out;
}

cmpx add (cmpx x, cmpx y)
{
    cmpx out;
    out.lh = x.lh + y.lh;
    out.rh = x.rh + y.rh;
    return out;
}

int main()
{
    cmpx x, y;
    cin >> x.lh >> x.rh >> y.lh >> y.rh;

    cout << "x = ";
    outNum(x);

    cout << "y = ";
    outNum(y);

    cout << "x += y; x = ";
    x = add(x, y);
    outNum (x);

    cout << "y *= x; y = ";
    y = mult(x, y);
    outNum(y);

    cout << "x + y = ";
    outNum(add(x, y));

    cout << "y * x = ";
    outNum(mult(x, y));

    cout << "x = ";
    outNum(x);
    
    cout << "y = ";
    outNum(y);

    return 0;
}