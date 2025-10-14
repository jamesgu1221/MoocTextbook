#include <iostream>

using namespace std;

int main()
{
    int m, n, cate=0, i, p, yinshu=0;
    cin >> m >> n;
    if (m==1) m=2;
    for (i=m; i<=n; i++){
        for (p=2; p<=i; p++){
            if(i%p == 0) yinshu++;
        }
        if (yinshu <= 1) cate++;
        yinshu = 0;
    }
    cout << cate << endl;
    return 0;
}