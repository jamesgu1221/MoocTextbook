#include <iostream>
using  namespace std;
int main()
{
    int a,b,add,max,min;
    max = 2147483647;
    min = -2147483648;

    cin >> a >> b;

    if ( b >= 0 && max - b < a || b < 0 && min - b > a) cout << "error";
    else {add = a + b;
    
    cout << add;
}

    

    
    return 0;
}