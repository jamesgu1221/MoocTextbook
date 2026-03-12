#include "circle.h"
#include <iostream>
using namespace std;
int main()
{
    int x,y,r;
    cin>>x>>y>>r;
    Circle c(x,y,r);

    int cx,cy;
    c.getO(cx,cy);
    cout<<cx<<' '<<cy<<endl;
    cout<<c.getR()<<endl;

    int move_x,move_y;
    cin>>move_x>>move_y;
    c.move(move_x,move_y);  
    c.getO(cx,cy);
    cout<<cx<<' '<<cy<<endl;

    int new_r;
    cin>>new_r;
    c.setR(new_r);
    cout<<c.getR()<<endl;

    return 0;
}   



/*
任务描述
    定义圆的类Circle，包含三个属性：圆心(x,y)和半径r

编程要求
    定义圆的类Circle，包含三个属性：圆心(x,y)和半径r，成员函数见main函数。
    用户先输入整数x, y, r，表示圆心（x,y）和半径r，程序输出圆的圆心坐标，以及圆的半径。
    用户再输入整数move_x, move_y，表示圆心的偏移量。
    程序输出移动后的圆的圆心坐标。用户最后输入整数new_r，表示新的半径，程序输出修改后的圆的半径。

测试说明
    测试输入：
        2 3 5
        -1 1
        10

    预期输出：
        2 3
        5
        1 4
        10
*/