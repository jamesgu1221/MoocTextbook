#include <iostream>

using namespace std;

int main()
{
    int time, per, should, actual;

    cin >> time >> per;

    should = time * per;
    actual = 0.9 * should;

    cout << "应发工资：" << should << endl;
    cout << "实发工资：" << actual << endl;
    
    return 0;
}