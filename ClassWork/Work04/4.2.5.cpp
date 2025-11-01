#include <iostream>

using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    int max = 0;
    int matrix[10][10] = {0};
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
    }

    int RowMax[10]={0}, ColMin[10];
    for(int i=0; i<10; i++){
        ColMin[i]= max;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] > RowMax[i]){
                RowMax[i] = matrix[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[j][i] < ColMin[i]){
                ColMin[i] = matrix[j][i];
            }
        }
    }

    bool Found = false;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == RowMax[i] && matrix[i][j] == ColMin[j]){
                cout << "mat[" << i << "][" << j << "]=" << matrix[i][j] << endl;
                Found = true;
            }
        }
    }


    if(!Found) cout << "Not Found";
    return 0;
}