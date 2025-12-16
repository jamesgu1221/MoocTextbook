#include <iostream>
#include "clock.h"
using namespace std;


int main() {

    char time1[9], time2[9];
    cin.getline(time1, 10);
    cin.getline(time2, 10);

    class clock t1(time1);
    class clock t2(time2);
    t1.minus(t1,t2);
    return 0;
}
