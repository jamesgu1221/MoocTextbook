#include <iostream>

using namespace std;

//输入十进制整数，输出指定进制数
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


