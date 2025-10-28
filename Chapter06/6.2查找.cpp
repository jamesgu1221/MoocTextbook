//6.2.1顺序查找
    //for循环
    //最多需要n次

int main(){
int  k, x;
int array[] = {2, 3, 1, 7, 5, 8, 9, 0, 4, 6};
cout << "请输入要查找的元素值："; cin >> x;
for (k = 0; k < 10; ++k)
  if (x == array[k]) { 
    cout << k; 
    break;
  }
if (k == 10) cout << "-1";
}


//6.2.2二分查找
    //要求序列已排序
    //最多需要lbn次


#include <iostream>

using namespace std;

int main()
{ int lh, rh, mid, x;
  int array[ ]={0,1,2,3,4,5,5,6,7,8,9};
  cout <<"请输入要查找的数据："; cin >> x;
  lh = 0, rh = 9;

  while (lh <= rh){
    mid = (lh + rh)/2;
    if (array[mid] == x){
        cout << mid;
        break;
    }
    else if (array[mid] > x){
        rh = mid-1;
    }
    else if (array[mid] < x){
        lh = mid+1;
    }
  }
if (lh > rh) cout << "-1";

  return 0;
}
