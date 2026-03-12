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



/*
任务描述
    设计一个hh:mm:ss格式的时钟类，支持时间的修改和计算两个时间的差值(后者减前者的绝对值) 

编程要求
    补充代码，完成时钟类的定义。
    用户输入两个时间（24小时制），计算其差值（两个时间不保证先后顺序）  

测试说明
    测试输入：
        10:30:25
        14:20:34

    预期输出：
        03:50:09
*/