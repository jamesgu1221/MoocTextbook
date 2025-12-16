//clock库的实现文件

#include "clock.h"
#include <iostream>
#include <iomanip>

using namespace std;

clock::clock(char time[])
{
    hour = 10 * (time[0] - '0') + (time[1] - '0');
    min  = 10 * (time[3] - '0') + (time[4] - '0');
    sec  = 10 * (time[6] - '0') + (time[7] - '0');
}

clock::clock()
{
    hour = 0;
    min = 0;
    sec = 0;
}

void clock::minus(clock t1, clock t2)
{
    if (t1.hour > t2.hour || 
        t1.hour == t2.hour && t1.min > t2.min || 
        t1.hour == t2.hour && t1.min == t2.min && t1.sec > t2.sec) {
        clock tmp;
        tmp = t1;
        t1 = t2;
        t2 = tmp;
    }

    char time[] = "00:00:00";
    clock output(time);
    if (t2.sec >= t1.sec) {
        output.sec = t2.sec - t1.sec;
    } else {
        output.sec = t2.sec - t1.sec + 60;
        t2.min--;
    }

    if (t2.min >= t1.min) {
        output.min = t2.min - t1.min;
    } else {
        output.min = t2.min - t1.min + 60;
        t2.hour--;
    }

    output.hour = t2.hour - t1.hour;

    cout << setfill('0') << setw(2) << output.hour << ':' 
         << setfill('0') << setw(2) << output.min << ':' 
         << setfill('0') << setw(2) << output.sec << endl;

    // cout << output.hour << ':'<< output.min << ':'<< output.sec << endl;
}