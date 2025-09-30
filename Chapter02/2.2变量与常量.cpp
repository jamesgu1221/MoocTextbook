//2.1.1 变量定义
    //类型名 变量名1,变量名2；
    //Tip
        //区分大小写
        //取模%只能用于整型
        //赋初值
            //int count = 0;
            //int count(0);
        //auto根据初值判断变量类型
            //auto sample0 = 10， sample1 = 11;
                //10为整型，故sample为整型
                //auto中的变量必须为同一类型


//2.2.2 数据类型
    //基本类型
        //整型
            // int          4B
            // long         4B
            // short        2B
            // long long    8B

            // unsinged int
            // unsinged long
            // unsigned short
            // unsigned long long
            //整数运算要注意数据范围，防止溢出
        
        // 实型
            // float        保留6-7位
            // double       保留10位
            // long double  保留10位
        // 字符型
            // char
        // 布尔型
            // bool     1B
            // true --> 1    false --> 0
            //不能直接输入输出
            //直接输出时显示0或1
    
    //占用空间
        // sizeof(类型名/变量名)

    //类型别名
        //typedef 原名 现名



//2.2.3 常量
    //实型常量
        //格式：十进制小数  或  科学计数法 123e3 = 123000
        //都作为double型处理
        //如果要改为float，可在后面加f, 如1.23f
    
    //符号常量
        //#define 符号常量名 字符串
        //const 类型 符号常量名 = 值
            //e.g. const double pi=3.1415926
    

    