//6.3.1 直接选择排序法
int main(){
    int lh, minh, k, tmp, n=10;
    int array[]={2, 5, 1, 9, 10, 0, 4, 8, 7, 6};

    for (lh=0; lh<n-1; lh++){
        minh=lh;
        for (k=lh; k<n; ++k){
            if(array[k] < array[minh]) minh=k;
        }
        tmp= array[minh];
        array[minh] = array[lh];
        array[lh] = tmp; 
    }

    return 0;
}

//6.3.2 冒泡排序法
#include <iostream>
using namespace std;

int main()
{
    int a[ ] = { 0, 3, 5, 1, 8, 7, 9, 4, 2, 10, 6};
    int i, j, tmp, n = 11;
    bool flag;
    for (i=n-1; i>0; i--){
        for (j=0; j<i; j++){
            if (a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }


    return 0;
}