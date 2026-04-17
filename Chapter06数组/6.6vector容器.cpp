//6.6.1 vector的定义
    //需要头文件
        #include <vector>

    //格式
        vector<int> v;           //空vector
        vector<int> v(5);        //5个元素，初始化为0
        vector<int> v(5, 10);    //5个元素，全部初始化为10

    //初始化
        vector<float> x = {-1.1, 0.2, 33.0, 4.4, 5.05};
        //大小不需要提前指定，可动态增长


//6.6.2 元素的访问
    //下标访问
        //v[i]，下标从0开始，越界不自动检查，同数组
    //安全访问
        //v.at(i)，越界时抛出异常
    //首尾元素
        v.front()   //第一个元素  
        v.back()    //最后一个元素

        
//6.6.3 常用操作
    //尾部增删
        v.push_back(42);    //末尾添加元素
        v.pop_back();       //删除末尾元素
    //大小相关
        v.size();            //元素个数
        v.empty();           //是否为空
    //清空
        v.clear();
    //插入与删除 (通过迭代器)
        v.insert(v.begin() + 2, 99);   //在下标2处插入99
        v.erase(v.begin() + 2);        //删除下标2处的元素
    //调整大小
        v.resize(10);        //调整为10个元素，新元素初始化为0
        v.resize(10, -1);    //新元素初始化为-1
    //整体赋值 (数组做不到)
        vector<int> b = a;   //深拷贝


//6.6.4 元素的遍历
    //下标遍历
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << ' ';
    //范围for (C++11)
        for (int x : v)
            cout << x << ' ';
    //引用方式修改元素
        for (int &x : v)
            x *= 2;


//6.6.5 vector作为函数参数
    //值传递 (拷贝整个vector，开销大)
        void printVec(vector<int> v) {
            for (int x : v)
                cout << x << ' ';
        }

    //引用传递 (避免拷贝)
        void printVec(const vector<int> &v) {
            for (int x : v)
                cout << x << ' ';
        }
    //需要修改时去掉const
        void doubleVec(vector<int> &v) {
            for (int &x : v)
                x *= 2;
        }
    //调用时不需要传大小，vector自带size()
        printVec(arr);


//6.6.6 常用算法 (#include <algorithm>)
    sort(v.begin(), v.end());              //升序排序
    reverse(v.begin(), v.end());           //翻转
    *max_element(v.begin(), v.end());      //最大值