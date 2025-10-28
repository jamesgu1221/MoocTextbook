#include <iostream>

using namespace std;

int main()
{

    int n, k;
    int arr[1000]={0};
    cin >> n >> k;

    for (int i=0; i<n; i++){
        arr[i] = 1;
    }

    for (int i=1; i<=k; i++){
        for(int lgt=1; lgt<=n; lgt++){
            if (lgt%i == 0){
                arr[lgt-1] *= -1;
            }
        }
    }

    for (int i=0; i<n; i++){
        if(arr[i] == -1) {
            cout << i+1 << ' ';
        }
    }


    return 0;
}