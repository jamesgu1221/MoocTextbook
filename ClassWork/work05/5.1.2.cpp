#include<iostream>

using namespace std;

int fib(){
    static int LastNum=0, CurrentNum=1, time=0;
    if(time == 0){
        time++;
        return 1;
    }
    int tmp = 0;
    tmp = CurrentNum;
    CurrentNum = LastNum + CurrentNum;
    LastNum = tmp;
    time++;
    return CurrentNum;
}

int main()
{
    int i,n;
	cin>>n;
    for(i = 0; i < n; i++)
        cout << fib() << endl;
	return 0;
}