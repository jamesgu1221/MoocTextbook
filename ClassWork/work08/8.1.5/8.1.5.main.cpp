#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    int num[]={1,3,5,7,9,11},i,data;
    mystack s(5);

    cout<<"The stack is empty: "<<s.isempty()<<endl;
    cout<<"The stack is full: "<<s.isfull()<<endl;

    for(i=0;i<=5;i++){
        if(s.push(num[i]))
            cout<<"Push "<<num[i]<<" success!"<<endl;
        else
            cout<<"Push "<<num[i]<<" fail!"<<endl;
    }

    cout<<"The stack is empty: "<<s.isempty()<<endl;
    cout<<"The stack is full: "<<s.isfull()<<endl;

    for(i=0;i<=5;i++){
        if(s.pop(data))
            cout<<"Pop "<<data<<" success!"<<endl;
        else
            cout<<"Pop fail!"<<endl;
    }

    return 0;
}




/*
任务描述
    栈是一种只能在一端进行插入和删除操作的数据结构，按照先进后出的原则存储数据，
    先进入的数据被压入栈底，最后的数据在栈顶，需要读数据的时候从栈顶开始弹出数据（最后一个数据被第一个读出来）。
    定义栈类mystack，用一个动态整型数组存放栈的数据，数据成员包括指向动态数组的指针，栈的最大规模（缺省值为100）和栈顶指针，
    要求能够判别栈满和栈空，数据进栈函数push，出栈函数pop等。

编程要求
    补充代码，main()函数内容如下：
        int main()
        {
            int num[]={1,3,5,7,9,11},i,data;
            mystack s(5);
            cout<<"The stack is empty: "<<s.isempty()<<endl;
            cout<<"The stack is full: "<<s.isfull()<<endl;
            for(i=0;i<=5;i++)
            {
                if(s.push(num[i]))
                    cout<<"Push "<<num[i]<<" success!"<<endl;
                else
                    cout<<"Push "<<num[i]<<" fail!"<<endl;
            }
            cout<<"The stack is empty: "<<s.isempty()<<endl;
            cout<<"The stack is full: "<<s.isfull()<<endl;
            for(i=0;i<=5;i++)
            {
                if(s.pop(data))
                    cout<<"Pop "<<data<<" success!"<<endl;
                else
                    cout<<"Pop fail!"<<endl;
            }
            return 0;
        }
    请从给出的main()函数推断出要实现的功能和函数。给出的main()函数不一定代表真实的测试程序的方式。

测试说明
    对应于所给main函数，其输出为：
        The stack is empty: 1
        The stack is full: 0
        Push 1 success!
        Push 3 success!
        Push 5 success!
        Push 7 success!
        Push 9 success!
        Push 11 fail!
        The stack is empty: 0
        The stack is full: 1
        Pop 9 success!
        Pop 7 success!
        Pop 5 success!
        Pop 3 success!
        Pop 1 success!
        Pop fail!
*/