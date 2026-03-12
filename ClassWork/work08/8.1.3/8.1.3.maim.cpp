#include "account.h"
#include <iostream>
using namespace std;

int main()
{
    // 1st month
    int first_money, second_money;
    cin>>first_money>>second_money;
    SavingAccount first(first_money);
    SavingAccount second(second_money);
    first.display();
    second.display();

    // 2nd month
    float new_rate;
    cin>>new_rate;
    first.calculate();
    first.display();
    second.calculate();
    second.display();
    first.changerate(new_rate);
    second.changerate(new_rate);

    // 3rd month
    int third_money;
    cin>>third_money;
    first.calculate();
    first.display();
    second.calculate();
    second.display();
    SavingAccount * p = new SavingAccount(third_money);

    // 4th month
    first.calculate();
    first.display();
    second.calculate();
    second.display();
    p->calculate();
    p->display();

    delete p;
    return 0;
}



/*
任务描述
    定义账户类SavingAccount，包含账号，存款金额和月利率。

编程要求
    补充代码，要求账号自动生成，第一个生成的对象账号为1，第二个生成的对象账号为2，依此类推。
    所需的操作包括修改月利率，每月计算新的存款额（原金额加上本月利息）和显示账户金额。
    不得使用全局变量。
    月利率初始值为0.05。
    本题已给定main()函数，输入共三次：第一次是第一个账户和第二个账户的存款金额；第二次是第二个月以后新的月利率；第三次是第三个账户的存款金额。
    输出是四个月的所有账户的账号、存款金额和月利率。(存款金额四舍五入保留两位小数)

测试说明
    测试输入：
        20000 10000
        0.01
        30000

    预期输出：
        1 20000.00 0.05
        2 10000.00 0.05
        1 21000.00 0.05
        2 10500.00 0.05
        1 21210.00 0.01
        2 10605.00 0.01
        1 21422.10 0.01
        2 10711.05 0.01
        3 31500.00 0.05
*/