#include <iostream>
#include "longlongint.h"

using namespace std;

int main(){

    LongLongInt x1;
    LongLongInt x2;
    x1.read();
    x2.read();
    sum(x1,x2).show();
    return 0;
}


/*
任务描述
    定义可处理任意大的正整数类LongLongInt

编程要求
    补充代码，定义可处理任意大的正整数类LongLongInt。
    用一个数组存放整型数的每一位。
    用户输入两个任意长度的正整数，输出这两个数的和。

测试说明
    测试输入：
        9934
        567

    预期输出：
        10501
*/