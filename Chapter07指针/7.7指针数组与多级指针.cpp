//7.7.1 指针数组
    //数组的元素均为指针
    //字符串数组
        //e.g.
            char *city[2] = {"Beijing", "Shanghai"};
            for (int i = 0; i < 2; i++) {
                cout << city[i] << endl;
            }

//7.7.3 多级指针
    //指向指针的指针
    //二级指针前加**

//7.7.4 动态二维数组
    //e.g.创建3*4数组
        int **a;

        a = new int * [3];  //创建一个指针数组，指向每行首地址

        for (int i = 0; i < 3; i++){    //为每一行申请空间
            a[i] = new int[4]
        }

        //输入输出时用a[i][j]访问二维数组

        for (int i = 0; i < 3; i++){ //释放每一行
            delete [] a[i];
        }
        delete [] a;    //释放保存每一行首地址的数组
