#include <iostream>

using namespace std;

int main()
{
    int n, total=0, x, i=0;
    cin >> n;
    for (i=0; i<10; i++){
    while (n > 0){      //从个位起取出数字中的每一位
        x = n%10;
        total += x;
        n = n/10;
    } 
    n=total;
    if (i<9) total=0;}

    cout << total << endl;

    return 0;
}