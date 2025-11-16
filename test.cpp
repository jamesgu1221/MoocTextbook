#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;


int func(char* str)
{
    int num = 0, digital;

    while(*str != '\0'){
        digital = *str - '0';
        num = num *10 + digital;
        str++;
    }
    return num;
}

int main(){
  char str[] = "1243499a0";
  cout << str;
  cout << func(str);



// int f(int a){ 
// int b=0;
//   static int c=3;
//   b=b+1; 
//   c=c+1;
//   return(a+b+c);
// }



return 0;
}

    