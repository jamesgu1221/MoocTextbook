//clock库的头文件

#ifndef clock_h
#define clock_h

class clock
{
    private:
        int hour;
        int min;
        int sec;

    public:
        clock(char time[]);
        void minus(clock t1, clock t2);
        clock();
};

#endif