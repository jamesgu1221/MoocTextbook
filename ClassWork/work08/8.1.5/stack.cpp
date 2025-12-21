#include "stack.h"

using namespace std;

mystack::mystack(int size)
{
    data = new int[size];
    maxsize = size;
    top = -1;
}

mystack::~mystack()
{
    delete []data;
}

bool mystack::isempty()
{
    return top == -1;
}

bool mystack::isfull()
{
    return top == maxsize-1;
}

bool mystack::push(int val)
{
    if(isfull()){
        return false;
    } else {
        top++;
        data[top] = val;
        return true;
    }
}

bool mystack::pop(int &output)
{
    if(isempty()){
        return false;
    } else {
        output = data[top];
        top--;
        return true;
    }
}