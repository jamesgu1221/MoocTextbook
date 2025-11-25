#include <iostream>
using namespace std;

int myfun(int &a, int &b);
int myfun(int* a, int* b);
int main() {
    int x, y;
    cin >> x >> y;
    cout << myfun(x, y) << ' ';
    cout << x << ' ' << y;
    return 0;
}
int myfun(int* a, int* b) {
    int c = *a - *b;
    *a *= 2;
    *b *= 3;
    return c;
}

int myfun(int &a, int &b){
    int tmp = (a - b) % 10;
    return (a *= 3, b *= 2, tmp);
}

