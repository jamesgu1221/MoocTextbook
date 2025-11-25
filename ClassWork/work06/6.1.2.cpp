#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *array = new int[n]();
    for (int i = 0; i < n; i++){
        array[i] = i + 1;
    }
    int currentPeople = n;
    int currentNum = 1;
    while(currentPeople > 1){
        for (int i = 0; i < n; i++){
            if(array[i] == 0){
                continue;
            } else{
                if (currentNum != 3){
                    currentNum++;
                } else {
                    currentNum = 1;
                    array[i] = 0;
                    currentPeople--;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        if (array[i] != 0){
            cout << array[i];
        }
    }

    delete []array;

    return 0;
}