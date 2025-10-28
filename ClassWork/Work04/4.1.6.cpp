#include <iostream>

using namespace std;

int main()
{

    int A[20][20];
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> A[i][j];
        }
    }

    int maxc=0,row=0,col;
    for (int i=0; i<n; i++){
        for(int j=maxc+1; j<n; j++){
            if(A[i][j] == 1) {
                col=j;
                row=i;
            }
        }
        maxc=col;

    }

    cout << row;


    return 0;
}