#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;


class A{
private:
    int x,y;
    static int no;
    int ID;
public:
    A(int a=5, int b=10):x(a),y(b){ 
        ID=++no;
        cout<<"Object "<<ID<<"(x:"<<x<<" y:"<<y<<") begins:"<<endl;
    };
    ~A(){cout<<"Object "<<ID<<" ends:"<<endl;};
};

int A::no=0;

int main(){
    A a1(1,2), a2, a3(a1), *p;
    p=new A();
    delete p;
    return 0;
}
