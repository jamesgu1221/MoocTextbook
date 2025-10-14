#include <iostream>

using namespace std;

int main(){

    int n, lis0, lisEnd, greedy, remain, remainA, remainB, remainC, remainD;
    cin >> n;
    lisEnd = n;

    // //穷举法
    remain = n;
    for (int m33=0; m33 <= n/33; m33++){
    remainA = remain - 33*m33;
        for (int m23=0; m23 <= remainA/23; m23++){
        remainB = remainA - 23*m23;
            for (int m16=0; m16 <= remainB/16; m16++){
            remainC = remainB - 16*m16;
                for (int m5=0; m5 <= remainC/5; m5++){
                remainD = remainC - 5*m5;
                lis0 = m33 + m23 + m16 + m5 + remainD;
                if (lis0 < lisEnd) lisEnd = lis0;
                }
            }
        }
    }


    //贪心算法
    int m33 = n/33;
    int m23 = n%33/23;
    int m16 = n%33%23/16;
    int m5 = n%33%23%16/5;
    int m1 = n%33%23%16%5;
    greedy = m33 + m23 + m16 + m5 + m1;

cout << lisEnd << ' ' << greedy << endl;
    return 0;
}