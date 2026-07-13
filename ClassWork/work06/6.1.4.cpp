#include <iostream>
#include <cstring>
using namespace std;

void getDate(int &day, int &month, int &year);
int main()
{
    int day, month, year;
    getDate(day, month, year);
    cout << day <<" "<< month<<" " << year << endl;
    return 0;
}

void getDate(int &day, int &month, int &year){
    char date[10] = {};
    cin.get(date, 10);
    int len = strlen(date);
    int lh;
    for(int i = 0; i < len; i++){
        if(date[i] == '-'){
            lh = i;
            break;
        }
    }
    int rh = lh + 4;

    char mon[4] = {0};
    const char *monthTable[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 3; i++){
        mon[i] = date[lh + 1 + i];
    }

    for(int i = 0; i < 12; i++){
        if(strcmp(mon, monthTable[i]) == 0){
            month = i+1;
        }
    }

    if (lh == 1){
        day = date[0] - '0';
    } else {
        day = 10 * (date[0] - '0') + date[1] - '0';
    }

    char date2[2];
    for(int i = rh+1; i < len; i++){
        date2[i - rh - 1] = date[i];
    }
    year = 10*(date2[0]-'0') + date2[1]-'0';
}




/*

任务描述
写一个函数getDate，从键盘读入一个形如dd-mmm-yy的日期。其中dd是一个1位或2位的表示日的整数，mmm是月份的3个字母的缩写，yy是两位数的年份。函数读入这个日期，并将它们以数字形式传给3个参数。

编程要求
函数读入日期，并将它们以数字形式传给3个参数。假设输入的日期总是合法的

测试说明

测试输入：5-Mar-18
预期输出：
5 3 18

*/