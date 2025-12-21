//文件: stack.h
//stack类的头文件

#ifndef stack_h
#define stack_h

class mystack
{
    private:
        int *data;      //栈空间指针
        int top;        //栈顶指针
        int maxsize;    //栈的最大容量

    public:
        //构造函数与析构函数
        mystack(int size = 100);
        ~mystack();

        //判断栈空函数
        bool isempty();

        //判断栈满函数
        bool isfull();

        //入栈函数
        bool push(int val);

        //出栈函数
        bool pop(int &output);

};

#endif