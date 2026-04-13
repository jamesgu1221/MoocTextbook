//8.3.1 pair的定义
    //标准库结构体模板，包含两个成员：first和second
    #include <utility>

    pair<string, int> p1;                    //默认初始化
    pair<string, int> p2("张三", 90);         //直接初始化
    pair<string, int> p3 = {"李四", 85};      //列表初始化（C++11）


//8.3.2 pair成员的访问
    p2.first;      // "张三"
    p2.second;     // 90

    pair<string, int> *pp = &p2;
    pp->first;     // 同上
    (*pp).second;


//8.3.3 pair的基本操作
    //赋值
        p1 = p2;
    //比较：先比first，相同再比second
        pair<int,int> a(1,3), b(1,5);  // a < b  (3 < 5)


//8.3.4 pair作为函数参数和返回值
    //函数需要同时返回两个值时常用
    pair<int,int> minmax(int a, int b) {
        return a < b ? make_pair(a,b) : make_pair(b,a);
    }


//8.3.5 常见用途
    //与vector结合存储键值对
        vector<pair<string,int>> scores = {{"张三",90}, {"李四",85}};