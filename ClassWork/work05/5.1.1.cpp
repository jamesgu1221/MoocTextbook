#include <iostream>

using namespace std;

void printInt(int n, int base){
    char num[] = "0123456789ABCDEF";
    char out[100];
    int out_len=0;
    while (n != 0){
        int tmp = 0;
        tmp = n % base;
        out[out_len] = tmp;
        out_len++;
        n = n / base;
    }
    for (int i=out_len-1; i>=0; i--){
        int tmp = out[i];
        cout << num[tmp];
    }


}
int main()
{
    int n, base;
    cin >> n >> base;
    printInt(n, base);


    return 0;
}



// 输入两个十进制正整数 n 和 base(2≤base≤16)，
// 将 n 转换为 base 进制后输出。
// 大于十进制的 base 进制常用的是十六进制，
// 在十六进制中，除了十进制中用到的 0-9 这十个数字外，
// 还引入了A、B、C、D、E、F 来分别表示十进制的10、11、12、13、14、15。
// 要求定义并调用函数 printInt(n,base)，
// 它的功能是屏幕输出 n 的 base 进制表示。