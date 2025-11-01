#include <iostream>

using namespace std;

int main()
{

    //输入小球个数N，平台长度L
    int N, L;
    cin >> N >> L;

    //输入小球位置
    int location[10000] = {0};
    for(int i = 0; i<N; i++){
        cin >> location[i];
    }

    int time[10000]={0};
    int speed[10000]={0};
    for(int i = 0; i<N; i++){
        if(i % 2 == 0) time[i] = L - location[i];
        else time[i] = location[i]; 
    }

    int tmax = 0, tmin = L;
    for(int i=0; i<N; i++){
        if(time[i] > tmax) tmax = time[i];
        if(time[i] < tmin) tmin = time[i];
    }

    cout << tmin << ' ' << tmax;





    return 0;
}