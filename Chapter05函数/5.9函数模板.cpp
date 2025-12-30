//用途
    //将同一个算法应用于不同的数据类型
//格式
    /*
        template<class 标识符1, class 标识符2, ...>
        返回类型 函数名(形式参数表){
            函数体
        }
    */

    //e.g. 求两者中的较大值
            template <class T>  //T作为后续类型名使用
            T max(T a, T b){
                return a>b ? a : b;
            }
    
//注意
    //每个模板参数之前都有关键字class或typename
    //通常，每个模板参数都需要出现在函数形式参数表，如未出现，则调用时需要显示指定模板实参
        //e.g.
            //定义函数
                //格式
                    /*
                        template <class T1, class T2, class T3>
                        返回类型 函数名(形式参数表){
                            函数体
                        }
                    */
                //e.g.
                    template <class T1, class T2, class T3>
                    T3 add(T1 x, T2 y){
                        return x+y;
                    }

            //调用函数
                //格式
                    //函数名<模板实参1, 模板实参2, ...>(实参1, 实参2, ...)
                //e.g.
                    add<int, char, int>(5, 'a');    //return 102
                    add<int, char, char>(5, 'a');   //return ‘f’
                    //↑  T1   T2    T3(此处为返回类型)
