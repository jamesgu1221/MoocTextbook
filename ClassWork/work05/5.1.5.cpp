#include <iostream>
using namespace std;

long long quickPow(int n, int k){
    if(k == 0) return 1;
    if(k == 1) return n;
    long long con = quickPow(n, k/2);
    long long out = con*con;
    if(k%2 == 0){
        return out;
    } else {
        return n*out;
    }
    return 0;
}

int main() 
{
  int n, k;
  cin >> n >> k; 
  cout << quickPow(n, k);
  return 0;
}