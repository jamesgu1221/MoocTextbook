//2.3.1 数据输入
    //cin与>>
        //输入数据以空格或Tab分隔
        // '>>'以空白字符/不合法字符结束
        //回车结束输入

    //cin.get()
        //从键盘接收一个字符
        //可以接收空白字符
        //example = cin.get()
        //cin.get(example)
    


//2.3.2 数据的输出
    //cout与<<
        //endl表示换行符，光标移到下一行第一列
    //cout.put()
        //e.g.输出字符A
            //cout.put('A')
            //cout.put(65)


    //格式化输入输出
        //流操作符需要包含头文件<iomanip>

        //stew
            //设置域宽
            //只影响下一个输入输出操作
            //效果
                //输出
                    //数据长度 < 域宽，在数据左侧填充空格
                    //数据长度 >= 域宽，按实际长度输出
                //输入
                    //输入数据长度 < 域宽，正常输入
                    //输入数据长度 >= 域宽，只输入域宽指定长度的数据

        //setprecision与precision
            //设置浮点数的精度，即有效位数
            //影响到下一个设置精度的操作之前
            cout << fixed << setprecision(2) << 3.14159; //输出3.14

        //设置进制
            //hex   十六进制    hexadecimal
            //oct   八进制      octal
            //dec   十进制      decimal
            //setbase(16/10/8)
            //更改后才会变化
            //e.g.
                int num = 030;
                cout << oct << num << endl; //输出30    (八进制)
                cout << dec << num << endl; //输出24    (十进制)
                cout << hex << num << endl; //输出18    (十六进制)
        
