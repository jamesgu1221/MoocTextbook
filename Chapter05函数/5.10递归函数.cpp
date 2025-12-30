//5.10.1 递归函数的概念
    //调用了自己的函数叫做递归函数
    //必须有终止条件
    //运行结束前每一阶的函数都分配占用了内存空间，故不能用于运算量过大的任务
    //有时可用循环代替
    
    //e.g. 计算阶乘 n!
            int factorial(int n){
                if (n==0) return 1;          //终止条件
                else return n * factorial(n-1); //递归调用
            }

    //e.g. 计算斐波那契数列第n项
            int fibonacci(int n){
                if (n==1 || n==2) return 1;  //终止条件
                else return fibonacci(n-1) + fibonacci(n-2); //递归调用
            }