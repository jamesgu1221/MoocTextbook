#include <iostream>
using namespace std;

//6.3.1 直接选择排序法
    int main(){
        int lh, minh, k, tmp, n=10;
        int array[]={2, 5, 1, 9, 10, 0, 4, 8, 7, 6};

            for (lh = 0; lh < n-1; lh++) {  //lh代表当前轮次的第一个下标
                minh = lh;      //假设当前元素为最小值
                for (k = lh+1; k < n; k++) {    //寻找最小元素的下标
                    if(array[minh] > array[k]) {
                        minh = k;
                    }
                }
                if (minh != lh) {   //交换当前元素和最小元素
                    tmp = array[lh];
                    array[lh] = array[minh];
                    array[minh] = tmp;
                }
            }
        return 0;
    }

//6.3.2 冒泡排序法
    int main()
    {
        int a[] = {0, 3, 5, 1, 8, 7, 9, 4, 2, 10, 6};
        int i, j, tmp, n = 11;
        bool flag;

        for (i = 0; i < n-1; i++) {
            flag = false;  //假设本轮没有交换
            for (j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j+1]) {
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                    flag = true;  //发生了交换
                }
            }
            if (!flag) break;  //如果本轮没有发生交换，提前结束排序
        }

        return 0;
    }



        