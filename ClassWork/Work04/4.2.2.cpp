#include <iostream>

using namespace std;

//判断是否是闰年
bool IsLeapYear(int year)
{
    return ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0));
}

int main()
{

    int n;
    cin >> n;

    int week[7]={0}, month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year, mon, distance=12;
    for(year=1900; year<1900+n; year++){
        for(mon=0; mon<12; mon++){
            if(IsLeapYear(year)) month[1] = 29;
            else month[1]=28;

            int weekday = distance % 7;
            week[weekday]++;
            distance += month[mon];
        }
    }

    for(int i=0; i<7; i++){
        cout << week[i] << ' ';
    }
    

    return 0;
}