#include <iostream>

using namespace std;

int main()
{
    int m, n, i, p, total=0, num=0;

    cin >> m >> n;
    for (i=m; i<=n; i++){        
        total=0;
        for (p=1; p<i; p++){
            if(i%p == 0) total += p;}
        
        if (total == i) {
            cout << i << ' ';
            num++;}
        
    }
    if (num == 0) cout << "-1" << endl;       


    return 0;
}