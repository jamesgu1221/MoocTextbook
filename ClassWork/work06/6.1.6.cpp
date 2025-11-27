#include <iostream>
using namespace std;

char* strrchr(char* str, char ch) 
{
    char* lastPos = nullptr;
    for(char* p = str; *p != '\0'; ++p) {
        if (*p == ch) {
            lastPos = p;
        }
    }
    return lastPos;
}

int main()
{    
    char str[50];
    cin.getline(str, 50);

    char ch;
    cin >> ch;

    char* p = strrchr(str, ch);
    if (p != nullptr) {
        cout << p << endl;
    } else {
        cout << "no" << endl;
    }


    return 0;
}