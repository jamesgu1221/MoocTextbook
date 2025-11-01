#include <iostream>

using namespace std;

int Max(int i, int j){
    if (i > j) return i;
    else return j;
}

int main()
{
    int R;
    cin >> R;

    int array[10][10] ={0};
    for(int i=0; i<R; i++){
        for(int j=0; j<=i; j++){
            cin >> array[i][j];
        }
    } 

    for(int i=R-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            array[i][j] += Max(array[i+1][j], array[i+1][j+1]);
        }
    }

    cout << array[0][0];
    return 0;
}