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