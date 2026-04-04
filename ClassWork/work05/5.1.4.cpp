#include<iostream>
using namespace std;

void Insert_Sort(int A[],int n){
    if(n>1){
        Insert_Sort(A,n-1); //递归将前面n-1个元素排序好
        int CurrentNum = A[n-1];
        int j = n-2;
        while(A[j] > CurrentNum && j>=0){
            A[j+1] = A[j];
            A[j] = CurrentNum;
            j--;
        }
    }
}

int main()
{
    int n, num[1000];
    cin>>n;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }

    Insert_Sort(num, n);
    for(int i=0; i<n; i++){
        cout << num[i] << ' ';
    }

	return 0;
}


/*
任务描述
    插入排序的递归实现

    一个数组有n个元素，假如前面n-1个元素已经排序好了，那么把第n个元素插入到前面n-1个元素中，使得数组有序排列，就是插入排序了。
    至于n-1个元素如何已经先排序好，那么我们可以假设前面n-2个元素已经排序好，把第n-1个元素插入到前面n-2个元素中。
    依次类推，直到只剩下一个元素，也就是第一个元素。排序完成。

    void Insert_Sort(int A[],int n)
    {
        if(n>1)
        {
            Insert_Sort(A,n-1);//递归将前面n-1个元素排序
            //你的代码，把第n个元素插入到前面n-1个元素中
        }
        //递归的出口是n=1，无需做任何操作
    }

编程要求
    补充代码，先输入数组元素的个数，再输入数组元素，输出排序后的数组元素。测试样例数组长度范围为1~1000，输入数组限整数。

测试说明
    测试输入：4 2 3 1 4
    预期输出：
    1 2 3 4