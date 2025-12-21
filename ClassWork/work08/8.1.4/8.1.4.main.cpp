#include <iostream>
#include "longlongint.h"

using namespace std;

int main(){

    LongLongInt x1;
    LongLongInt x2;
    x1.read();
    x2.read();
    sum(x1,x2).show();
    return 0;
}
