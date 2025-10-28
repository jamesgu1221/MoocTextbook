//6.5.1 C语言风格的字符串
    //没有专门字符串，用字符数组保存
    //初始化
        //char ch[] = {'H', 'e', 'l', 'l', 'o', '\0'};
        //char ch[] = {"Hello"};
        //char ch[] = "Hello";
    
    //输入
        //cin >> ch;       //一般不用
            //空格视为结束
            //不检查输入是否越界
        //cin.getline(字符数组名, 数组长度, 结束标记)；
            //自动保留一位给\0

    //输出
        //cout << ch;
    
    //字符串处理函数(csrting)
        //strcpy(ch1, ch2)      用ch2覆盖ch1
        //strcat(ch1, ch2)      将ch2拼接到ch1末尾
        //strlen(ch)            返回字符串长度, \0不计入
        //strcmp(ch1, ch2)      从前向后比较，比较首个不同的元素，ch1>ch2返回正数，ch1=ch2返回0，ch1<ch2返回负数
        //strchr(ch, a)         返回第一个a的地址