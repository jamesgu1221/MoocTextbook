//circle库的头文件

#ifndef circle_h
#define circle_h

class Circle
{
    private:
    int center_x;
    int center_y;
    int radius;

    public:
    Circle(int x, int y, int r);
    void getO(int &center_x, int &center_y);
    int getR();
    void move(int x, int y);
    void setR(int new_r);
};

#endif