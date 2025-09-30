#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    // m >= 10 && m <= 99;
    // a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z';
    // m % 2 == 1;
    // x != 2 && x != 3;

    // switch(2){
    //     case 3: cout << "case3" << endl;
    //     case 2: cout << "case2" << endl;
    //     case 1: cout << "case1" << endl;
    //     // case 2: cout << "case2" << endl;
    //     // case 3: cout << "case3" << endl;
    //     // case 2: cout << "case2" << endl;
    // }

    double a, b, dlt, integral = 0, y;
	cout << "请输入定积分的区间：" ;
	cin >> a >> b;
  	cout << "请输入小矩形的宽度：" ;
  	cin >> dlt;

    for (double i=a; i<=b; i+=dlt){
        y = i * i + 5 * i + 1;
        integral += dlt * y;
    }



    return 0;

    
}