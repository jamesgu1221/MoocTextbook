#include <iostream>

using namespace std;

int main()
{
    int a, b, mx, mi;
    cin >> a >> b;
    mx = max(a, b);
    mi = min(a, b);
    int diff = abs(a - b);

    // 双方都小于11分，比赛进行中
    if (mx < 11) {
        cout << "In progress";
    }
    // 一方达到11分，另一方小于10分（直接获胜）
    else if (mx >= 11 && mi < 10) {
            if (mx > 11) cout << "Illegal";
            else if (a == mx) cout << "A win";
                 else cout << "B win";
    }

    else if (mx >= 11 && mi >=10) 
            if (diff > 2) cout << "Illegal";
            else if (diff == 2) 
                if (a == mx) cout << "A win";
                else cout << "B win";
            else cout << "In progress";


    return 0;
}