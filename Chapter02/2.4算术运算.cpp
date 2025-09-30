//2.4.1 算数表达式
    //优先级
        //先加减后乘除
        //%与*/优先级相同
        //只能用小括号


//2.4.2 不同数据类型混合运算
    //自动类型转换
        //short char bool --> int
        //占用空间少、数值范围小 --> 占用空间多、数值范围大
            //int与long long    int转long long
            //int与double       int转double


//2.4.3 强制类型转换
    //e.g. 9/4.0 = 2.25  一个数为浮点数，另一个自动转换为double
    //e.g. x=9 y=4   x/double(y)=2.25
    //静态转换static_cast<类型名>(表达式)


//2.4.4 数学函数库
    //#include <cmath>
    