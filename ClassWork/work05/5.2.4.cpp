#include <iostream>
using namespace std;

int knapsack(int n, int s[], int v[], int C) {
    int *value = new int[C+1]();
    for (int i = 0; i < n; i++) {
        for (int j = C; j >= s[i]; j--) {
            if (value[j - s[i]] + v[i] > value[j]) {
                value[j] = value[j - s[i]] + v[i];
            }
        }
    }

    int max_value = value[C];
    delete [] value;
    return max_value;
}

int main() 
{
  int n, C, s[2000], v[2000];
  cin >> C >> n;            //总容量为C，物品个数为n
  
  for (int i = 0; i < n; i++)  
    cin >> s[i] >> v[i];    //体积为s，价值为v
  
  cout << knapsack(n, s, v, C) << endl;
  return 0;
}


/*

0-1背包问题

任务描述
考虑如下定义的背包问题K(U, C)：设U={u(1), u(2),..., u(n)}是一个准备放入容量为C的背包中的n个物品的集合，
第i个物品u(i)具有体积s(i)和价值v(i)，要求从这n个物品中挑选出一部分装入背包，在不超过背包容量的前提下使背包中物品的价值最大。
这里C, s(i)和v(i)都为正整数，且所有的s(i)都不大于C。

编程要求
完成函数knapsack。
程序将先输入背包的容量C（1<=C<=1000)和物品的个数n，
然后依次输入n(1<=n<=150)个物品的体积s(i)和价值v(i)(i=1, 2, 3, ... , n)，
输出能够装入背包中物品总价值的最大值。

测试说明

测试输入：
10 5 
2 6
2 3
6 5
5 4
4 6
预期输出：
15
输出说明：物品体积=2+2+4<=10，相应的物品价值=6+3+6=15

*/