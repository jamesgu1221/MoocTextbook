//用途
    //将同一个算法应用于不同的数据类型
//格式
    /*
        template<模板参数类型表>
        返回类型 函数名(形式参数表){
            函数体
        }
    */

    //e.g. 求两者中的较大值
            template <class T>
            T max(T a, T b){
                return a>b ? a : b;
            }
    
//注意
    //每个模板参数之前都有关键字class或typename
    //通常，每个模板参数都需要出现在函数形式参数表，如未出现，则调用时需要显示指定模板实参
        //e.g.
            templete <class T1, class T2, class T3>
            T3 clac(T1 x, T2 y){
                return x+y;
            }

            clac<int, char, int>(5, 'a');    //return 102
            clac<int, char, char>(5, 'a');   //return ‘f’
