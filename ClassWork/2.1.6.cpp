#include <iostream>

using namespace std;

int main()
{

    int year, month, day, dayNum, runnian;
    cin >> year >> month >> day;

    if (year%4 == 0){
        if (year%100 == 0){
            if(year%400 == 0) runnian = 1;
            else runnian = 0;
        }
        else runnian = 1;
    }
    else runnian = 0;

    switch (runnian){
        case 0 : if (month > 2) dayNum=31*(month-1)+day - (4*month+23)/10;
                 else dayNum=31*(month-1)+day; break;
        case 1 : if (month > 2) dayNum=31*(month-1)+day - (4*month+23)/10 + 1;
                 else dayNum=31*(month-1)+day; break;
    }

    cout << dayNum;
    return 0;
}