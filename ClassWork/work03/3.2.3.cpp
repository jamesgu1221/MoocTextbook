#include <iostream>

using namespace std;

int main()
{

    //找n的阶乘包含的p因子的个数
    int n, p, count;
    cin >> n >> p;

    for (int i=p; i<=n; i*=p){
        count += n/i;
    }

    cout << count << endl;
    return 0;
}