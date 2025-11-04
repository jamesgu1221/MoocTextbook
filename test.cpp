#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;

// int main(){

    
    // double a, b, dlt, integral = 0, y;
	// cout << "请输入定积分的区间：" ;
	// cin >> a >> b;
  	// cout << "请输入小矩形的宽度：" ;
  	// cin >> dlt;

    // for (double i=a; i<=b; i+=dlt){
    //     y = i * i + 5 * i + 1;
    //     integral += dlt * y;
    // }


    // int lh, minh, k, tmp, n=10;
    // int array[]={2, 5, 1, 9, 10, 0, 4, 8, 7, 6};

    // for (lh=0; lh<n-1; lh++){
    //     minh=lh;
    //     for (k=lh; k<n; ++k){
    //         if(array[k] < array[minh]) minh=k;
    //     }
    //     tmp= array[minh];
    //     array[minh] = array[lh];
    //     array[lh] = tmp; 
    // }
    // for (int i=0; i<n; i++){
    //     cout << array[i] << " ";
    // }
    // return 0;
    //}

int f(int a){ 
int b=0;
  static int c=3;
  b=b+1; 
  c=c+1;
  return(a+b+c);
}

int main()
{ int a=2,i;
  for (i=0; i<3; ++i)
    cout << f(a);
return 0;
}

    