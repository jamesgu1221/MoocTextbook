//4.3.1 while语句
    //格式
    /*
        while (表达式){
        }
    */

    //e.g. 计算e的x次方
        /*
        long double ex, x, p;   //ex存储ex的值，p存储当前项，i存储次方
        int i;
        cin >> x;
        ex=0, p=1, i=0;

        while (p>1e-6){
            ex += p; 
            i++;
            p = p * x / i;

        }
        cout <<  ex;
        */


//4.3.2 do-while循环
    //格式
    /*
        do 语句 while (表达式)；
    */

    //do while与while辨析
        //while不满足初始条件，一次也不执行
        //do while无论是否满足条件，都会执行一次

        //e.g. 二分法求函数的零点
            /*
            double x, x1 = -1, x2 = 1, fx1, fx;

            do {
                x = (x1 + x2)/2;
                fx = x*x*x + 2*x*x + 5*x - 1;
                fx1 = x1*x1*x1 + 2*x1*x1 + 5*x1 - 1;
                if (fx * fx1 > 0) {x1 = x;}
                else {x2 = x;}
            } while (fabs(fx) > 1e-6);



            cout << "方程的根为：" << x << endl;
            */

