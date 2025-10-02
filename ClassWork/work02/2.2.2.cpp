#include <iostream>

using namespace std;

int main()
{

    int year, month, day, dayNum, runnian, legal;
    cin >> year >> month >> day;

    if (year%4 == 0){
        if (year%100 == 0){
            if(year%400 == 0) runnian = 1;
            else runnian = 0;
        }
        else runnian = 1;
    }
    else runnian = 0;

    if (month > 12 || day > 31) legal = 0;
    else if (month == 2) {
        if (runnian == 0){
            if (day > 28) legal = 0;
            else legal = 1;
        }
        else if (day > 29) legal = 0;
             else legal = 1;
        }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        if (day > 30) legal = 0;
        else legal = 1;
     }
    else legal = 1;

    

    switch (legal){
        case 0 : cout << "Illegal"; break;
        case 1 : switch (runnian){
                case 0 : if (month > 2) dayNum=31*(month-1)+day - (4*month+23)/10;
                        else dayNum=31*(month-1)+day; cout << dayNum; break;
                case 1 : if (month > 2) dayNum=31*(month-1)+day - (4*month+23)/10 + 1;
                        else dayNum=31*(month-1)+day; cout << dayNum; break;
                
                
                
    }

    }

    return 0;
}