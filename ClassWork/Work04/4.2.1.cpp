#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char ch[30];
    cin.getline(ch, 30);
    char grid[n][30];
    for(int i=0; i<n; i++){
        for(int j=0; j<30; j++){
            grid[i][j]='\0';
        }
    }


    if (n==1) {
        for (int i=0; ch[i]!='\0'; i++){
            cout << ch[i];
        }
    }
    else{
        int direction = -1, currentRow = 0, currentCol = 0, i=0;
            for(currentRow = 0; ch[i] !='\0'; currentRow += direction){
                grid[currentRow][currentCol] = ch[i];
                i++;
                if(currentRow == n-1 || currentRow == 0) direction *= -1;
                if(direction==-1) currentCol++;
            }

        for(int i=0; i<n; i++){
            for(int j=0; j<30; j++){
                
                if(grid[i][j]!='\0') cout << grid[i][j];
            }
        }
    }
    

    return 0;
}