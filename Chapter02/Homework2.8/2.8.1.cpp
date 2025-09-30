#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    //变量定义
    double a, b, c , x1, x2, dlt;

    //输入阶段
    cout << "请输入方程的3个参数:" << endl;
    cin >> a >> b >> c;

    //计算阶段
    dlt = b*b - 4*a*c;
    x1 = (-b + sqrt(dlt)) / 2 / a;
    x2 = (-b - sqrt(dlt)) / 2 / a;

    //输出阶段
    cout << "x1=" << x1 << "   x2="  << x2 << endl;
    

    return 0;
}