#include<iostream>
using namespace std;

void merge(int A[], int left, int mid, int right)
{
    int temp[101] = {0};
    for (int i = left ; i <= right; i++) {
        temp[i] = A[i];
    }

    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (temp[i] <= temp[j]) {
            A[k] = temp[i];
            i++;
        } else {
            A[k] = temp[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        A[k] = temp[i];
        i++;
        k++;
    }

    while (j <= right) {
        A[k] = temp[j];
        j++;
        k++;
    }
}

void sort(int A[], int left, int right)     //递归算法排序
{
    if (left >= right) return;
    int mid = (left + right) / 2;
    sort(A, left, mid);        //对前一半排序
    sort(A, mid + 1, right);    //对后一半排序
    merge(A, left, mid, right);    //合并两部分
}



void merge_Sort(int A[],int n)      //调用sort函数进行排序
{
    if (n == 1) return;
    sort(A, 0, n - 1);
}

int main()
{
    int n, num[100];
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>num[i];
    }

    merge_Sort(num, n);

    for (int i=0; i<n; i++) {
        cout << num[i] << " ";
    }
	return 0;
}