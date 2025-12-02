#include <iostream>
using namespace std;

struct modTime {
    int hour;
    int min;
    int sec;
};

void setTime (struct modTime &time)
{
    cin >> time.hour >> time.min >> time.sec;
}

void increase (struct modTime &time)
{
    if (time.sec == 59) {
        time.sec = 0;
        time.min++;
    } else {
        time.sec++;
    }

    if (time.min == 60) {
        time.min = 0;
        time.hour++;
    }

    if (time.hour == 24) {
        time.hour = 0;
    }
}

void showTime (modTime &time)
{
    if (time.hour >= 0 && time.hour <= 9) {
        cout << 0;
    }
    cout << time.hour << ':';
    if (time.min >= 0 && time.min <= 9) {
        cout << 0;
    }
    cout << time.min << ':';
    if (time.sec >= 0 && time.sec <= 9) {
        cout << 0;
    }
    cout << time.sec << endl;
}

int main()
{
    struct modTime time1, time2;
    setTime(time1);
    setTime(time2);

    showTime(time1);
    increase(time1);
    showTime(time1);

    showTime(time2);
    increase(time2);
    showTime(time2);

    return 0;
}