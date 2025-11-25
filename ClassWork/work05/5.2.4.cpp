#include <iostream>
using namespace std;

int knapsack(int n, int s[], int v[], int C) {
    int *value = new int[C+1]();


    int max_value = value[C];
    delete [] value;
    return max_value;
}

int main() 
{
  int n, C,s[2000], v[2000];
  cin >> C >> n;            //总容量为C，物品个数为n
  
  for (int i = 0; i < n; i++)  
    cin >> s[i] >> v[i];    //体积为s，价值为v
  
  cout << knapsack(n, s, v, C) << endl;
  return 0;
}
