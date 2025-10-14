#include <iostream>

using namespace std;

int main()
{

    int n, r, kong, tu;
    cin >> n;
    for (r=1; r<=n; r++){
        kong=n-r;
        tu=2*r-1;
        for(kong; kong>0; kong--){
            cout << ' ';
        }
        for(tu; tu>0; tu--){
            cout << '+';
        }
        cout << "\n";
    }
    for (r=n+1; r<=(2*n-1); r++){
        kong=r-n;
        tu=4*n - 2*r -1;
        for(kong; kong>0; kong--){
            cout << ' ';
        }
        for(tu; tu>0; tu--){
            cout << '+';
        }
        cout << "\n";
    }
    return 0;

}