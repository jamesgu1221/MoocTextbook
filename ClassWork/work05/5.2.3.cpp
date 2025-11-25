#include<iostream>
#include<algorithm>
using namespace std;

int swim(int *p, int n){
    int minTime = 0;
    while(n >= 4){
        int time1, time2;
        time1 = p[n-1] + p[n-2] + 2*p[0];
        time2 = 2*p[1] + p[0] + p[n-1];
        if(time1 < time2){
            minTime += time1;
        } else {
            minTime += time2;
        }
        n = n - 2;
    }
    if (n == 3){
        minTime += p[0] + p[1] + p[2];
    }
    if (n == 2){
        minTime += p[1];
    }
    if (n == 1){
        minTime += p[0];
    }
    return minTime;
}

int main()
{
   	int n,p[1000],i;
    cin>>n;
    for(i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);
    cout<<swim(p,n);
    return 0;
}