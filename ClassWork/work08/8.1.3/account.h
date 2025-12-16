//account库的头文件

#ifndef ACCOUNT_H
#define ACCOUNT_H

class SavingAccount
{
    private:
    int account_num;
    double balance;
    double interest_rate;
    static int total_accounts;

    public:
    SavingAccount(int x);
    void display();
    void calculate();
    void changerate(float new_rate);

};

#endif