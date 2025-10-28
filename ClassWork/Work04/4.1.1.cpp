#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int n, arr[100]={};
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int lh, maxh, k, tmp;
    for (lh=0; lh<n; lh++){
        maxh=lh;
        for(k=lh; k<n; k++){
            if(arr[maxh] < arr[k]) maxh=k;
        }
        tmp = arr[maxh];
        arr[maxh] = arr[lh];
        arr[lh] = tmp;
    }

    for (int i=0; i<n-1; i++){
        cout << arr[i] << ' ';
    }
    cout << arr[n-1];

    return 0;
}