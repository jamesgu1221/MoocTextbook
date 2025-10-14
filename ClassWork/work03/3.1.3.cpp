#include <iostream>

using namespace std;

int main()
{

    int n, x, num, rev=0, cate=0, i;
    cin >> n;
    
    for (i=1; i<=n; i++){
        x=i;
    while (x > 0){
        num = x%10;
        rev = rev*10 + num;
        x = x/10;
    }
    if (i + rev == n) cate += 1;
    rev = 0;
    }

    cout << cate <<endl;
    return 0;
}