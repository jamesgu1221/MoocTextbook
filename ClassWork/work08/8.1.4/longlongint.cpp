//文件：longlongint.cpp 
//longlongint库的实现文件

#include "longlongint.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

//构造函数
LongLongInt::LongLongInt(){
    len = 0;
    digits = nullptr;
}

//复制构造函数(涉及数组的深拷贝)
LongLongInt::LongLongInt(const LongLongInt &num){
    len = num.len;
    digits = new int[len];
    for (int i = 0; i < len; i++){
        digits[i] = num.digits[i];
    }
}

//读入大整数
void LongLongInt::read(){
    string num;
    cin >> num;
    len = num.length();
    digits = new int[len];
    for (int i = 0; i < len; i++){
        digits[i] = num[len - 1 - i] - '0';
    }
}

//输出大整数
void LongLongInt::show(){
    for (int i = len-1; i >= 0; i--){
        cout << digits[i];
    }
    cout << endl;
}

//大整数加法
LongLongInt sum (const LongLongInt &x1,const LongLongInt &x2){
    LongLongInt result;
    int maxLen = (x1.len > x2.len) ? x1.len : x2.len;
    result.len = maxLen + 1;
    result.digits = new int[result.len];
    for (int i = 0; i < result.len; i++){
        result.digits[i] = 0;
    }
    for (int i = 0; i < maxLen; i++){
        if (i < x1.len){
            result.digits[i] += x1.digits[i];
        }
        if (i < x2.len){
            result.digits[i] += x2.digits[i];
        }
        if (result.digits[i] >= 10){
            result.digits[i] -= 10;
            result.digits[i + 1] += 1;
        }
    }

    if (result.digits[result.len - 1] == 0){
        result.len--;
    }

    return result;
}

//析构函数
LongLongInt::~LongLongInt(){
    delete[] digits;
}
