#include <iostream>

using namespace std;

int main()
{

    int come, leave, time, money, a;
    char cate;
    cin >> cate >> come >>leave;
    time = leave - come;

    if (cate == 'c') a = 0;
    else if (cate == 'b') a = 1;
         else a = 2;

    switch(a){
        case 0 : if (time > 3) money = 15 + 10*(time - 3);
                 else money = 5 * time; break;

        case 1 : if (time > 2) money = 20 + 15 * (time - 2);
                 else money = 10 * time; break;

        case 2 : if (time > 1) money = 10 + 15 * (time - 1);
                 else money = 10; break;

    }
    cout << money;

    


    return 0;
}