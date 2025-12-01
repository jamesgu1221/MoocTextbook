#include <iostream>
#include <cstring>
using namespace std;

void add_float(char* a, char* b, char* res) {
    //将res中所有元素赋值为0
    for (int i = 0; i < 128; i++){
        *(res + i) = '0';
    }

    //获取字符串 a, b 的长度 len_a, len_b
    int len_a, len_b;
    len_a = strlen(a);
    len_b = strlen(b);

    //获取'.'的数组下标dot_a和dot_b, 同时也是整数位数
    int dot_a, dot_b;
    for (int i = 0; i < len_a; i++) {
        if (a[i] == '.') {
            dot_a = i;
        }
    }
    for (int i = 0; i < len_b; i++) {
        if (b[i] == '.') {
            dot_b = i;
        }
    }

    //计算 a, b 的小数位数 after_len_a, after_len_b
    int after_len_a = len_a - dot_a - 1;
    int after_len_b = len_b - dot_b - 1;

    //确定a的小数位数是否更多, 存储在 is_after_len_a_larger
    bool is_after_a_longer = (after_len_a > after_len_b)? true : false;

    //把多出的小数部分直接存入res
    int currentLen = 0;
    int delta = 0;
    int after_len_min;
    if (is_after_a_longer) {
        delta = after_len_a - after_len_b;
        after_len_min = after_len_b;
        for(int i = 0; i < delta; i++) {
            res[127 - i] = a[len_a - 1 - i];
        }
    } else {
        delta = after_len_b - after_len_a;
        after_len_min = after_len_a;
        for(int i = 0; i < delta; i++) {
            res[127 - i] = b[len_b - 1 - i];
        }
    }
    currentLen = delta;     //执行结束后，res的后delta位有数字

    //小数部分加法(可能有1进位到个位上)
    for (int i = 0; i < after_len_min; i++) {
        res[127 - currentLen - i] = a[dot_a + after_len_min - i] + b[dot_b + after_len_min - i] - '0';
    }
    for(int i = 0; i < after_len_min; i++) {
        if (res[127 - currentLen - i] > '9') {
            res[127 - currentLen - i] -= 10;
            res[126 - currentLen - i] += 1;
            if (i == after_len_min - 1) {
                res[125 - currentLen - i] += 1;
            }
        }
    }
    currentLen += after_len_min + 1;
    res[128 - currentLen] = '.';

    //整数部分加法(重合部分)
    int dot_min = (dot_a < dot_b)? dot_a : dot_b;
    int dot_max = (dot_a > dot_b)? dot_a : dot_b;
    int dot_delta = dot_max - dot_min;
    for (int i = 0; i < dot_min; i++) {
        res[127 - currentLen - i] += a[dot_a - 1 - i] + b[dot_b - 1 - i] - '0' - '0';
        if (res[127 - currentLen - i] > '9') {
            res[127 - currentLen - i] -= 10;
            res[126 - currentLen - i] += 1;
        }
    }
    currentLen += dot_min;

    //整数部分加法(剩余部分)
    char *longer = (dot_a > dot_b)? a : b;
    for (int i = 0; i < dot_delta; i++) {
        res[127 - currentLen -i] += *(longer + dot_max - 1 - dot_min -i) - '0';
        if (res[127 - currentLen - i] > '9') {
            res[127 - currentLen - i] -= 10;
            res[126 - currentLen - i] += 1;
        }
    }

    int lh = 0, rh = 0;
    for (int i = 0; i < 128; i++) {
        if (res[i] != '0') {
            lh = i;
            break;
        }
    }
    for (int i = 0; i < 128; i++) {
        if (res[127 - i] != '0') {
            rh = 127 - i;
            break;
        }
    }

    for (int j = 0; j < rh - lh + 1; j++) {
        res[j] = res[lh + j];
    }

    if (rh - lh < 128) {
            res[rh - lh + 1] = '\0';
    }
}


int main()
{
    char num1[128], num2[128], res[128];
    cin >> num1;
    cin >> num2;
    add_float(num1, num2, res);
    cout << res << endl;
    return 0;
}
