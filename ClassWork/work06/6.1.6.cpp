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


/*

任务描述
本关任务：实现cstring库的函数strrchr

编程要求
strrchr第一个参数为输入字符串，第二个参数为要查找的字符。返回一个指针，指向被查找的字符串在字符串中最后出现的位置。如果没有出现，返回空指针。字符串最大长度50。

测试说明

测试输入：
asdfgfdsa
f
预期输出：
fdsa

测试输入：
asdgdsa
f
预期输出：
no

*/