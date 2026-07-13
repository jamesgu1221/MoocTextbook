#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char *originalText;
    originalText = new char[101]();
    cin.getline(originalText,101);
    int wordNum = 0;
    int len = strlen(originalText);
    if (len > 0){
        wordNum = 1;
        for(int k = 0; k < len; k++){
            if (originalText[k] == ' '){
                wordNum++;
            }
        }
    }

    char **wordArray;             //创建二维动态数组
    wordArray = new char *[wordNum];
    for (int j = 0; j < wordNum; j++){
        wordArray[j] = new char[15];
    }

    int row = 0, col = 0;
    for (int j = 0; j < len; j++){
        if (originalText[j] != ' '){
            wordArray[row][col] = originalText[j];
            col++;
        } else {
            wordArray[row][col] = '\0';
            row++;
            col = 0;
        }
    }
    wordArray[row][col] = '\0';

    char *order = new char[15];
    cin >> order;

    int *orderNum = new int[15]();
    int orderLen = strlen(order);
    for (int k = 0; k < orderLen; k++){
        orderNum[k] = order[k] -  '0';
    }

    cout << wordNum <<endl;
    for (int k = 0; k < wordNum; k++){
        cout << wordArray[orderNum[k]] << ' ';
    }
    

    for (int j = 0; j < wordNum; j++){
        delete [] wordArray[j];
    }
    delete []wordArray;
    delete []originalText;
    delete []order;
    delete []orderNum;

    return 0;
}

