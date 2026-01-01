//7.5.1 指针作为形式参数
    //作为函数形参返回多个结果(地址传递)
        //e.g.
            void swap(int *p1, int *p2){};
        //可以通过指针改变实参的值


// 7.5.2 数组作为函数参数再讨论

// 7.5.3 字符串作为函数参数
    //字符串实质上是字符数组，以'\0'结尾
        //传递字符串只需要传递字符数组的首地址(指向第一个字符的指针)
        //e.g.
            void printStr(const char *str){
                while(*str != '\0'){
                    cout << *str;
                    str++;
                }
                cout << endl;
            }

// 7.5.4 返回指针的函数
    //格式
        返回类型 *函数名(形参列表){};
        
        //e.g.
            int *createArray(int size){
                int *array = new int[size];
                return array;
            }
            //需要在不用时释放内存
                int *arr = createArray(10);
                delete [] arr;