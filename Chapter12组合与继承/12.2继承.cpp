// 12.2.1 派生类的定义
    //格式
        class 派生类名 : 派生方法 基类名
        {
            派生类新增的数据成员和成员函数
        };

    //示例：二维点类型 --> 三维点类型
        //基类
        class Point_2d 
        {
            private: 
                int x,y;
            public:
                void setpoint2(int a, int b) {x = a; y = b;} 
                int getx() {return x;}
                int gety() {return y;} 
        };

        // 派生类
        class Point_3d: public Point_2d
        {
            private:
                int z;
            public:
                void setpoint3(int a,int b,int c){setpoint2(a,b); z=c;}
                int getz() {return z;}
        };

    //派生方法
        /*
                        public派生         private派生
        原public        派生类对象可见      派生类成员可见 
        原private       在派生类中隐藏      在派生类中隐藏

        */