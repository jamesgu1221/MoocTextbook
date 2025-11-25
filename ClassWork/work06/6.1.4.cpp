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