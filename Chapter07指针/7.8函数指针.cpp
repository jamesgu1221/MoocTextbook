//7.8.1 指向函数的指针
    //函数由指令序列组成，
    //格式
        //返回类型 (*指针名)(形参列表)；
        //定义
            int IsDigit(int n, int k);
            int (*p)(int, int);
        //调用
            IsDigit(12, x);
            (*p)(12, x);


