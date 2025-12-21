//文件：longlongint.h
//longlongint库的头文件

#ifndef longlongint_h
#define longlongint_h

class LongLongInt
{
    private:
        int len;
        int* digits;

    public:
        LongLongInt();
        LongLongInt(const LongLongInt &num);
        ~LongLongInt();
        void read();
        void show();
        friend LongLongInt sum(const LongLongInt &x1,const LongLongInt &x2);
};

LongLongInt sum(const LongLongInt &x1,const LongLongInt &x2);

#endif

