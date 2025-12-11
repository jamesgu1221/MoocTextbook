//circle库的实现文件
#include "circle.h"

using namespace std;

Circle::Circle(int x, int y, int r)
{
    center_x = x;
    center_y = y;
    radius = r;
}

void Circle::getO(int &cx, int &cy)
{
    cx = center_x;
    cy = center_y;
}

int Circle::getR()
{
    return radius;
}

void Circle::move(int x, int y)
{
    center_x += x;
    center_y += y;
}

void Circle::setR(int new_r)
{
    radius = new_r;
}