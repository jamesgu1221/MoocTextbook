#include <iostream>
#include <iomanip>
#include "account.h"

using namespace std;

int SavingAccount::total_accounts = 0;

SavingAccount::SavingAccount(int x)
{
    account_num = ++total_accounts;
    balance = x;
    interest_rate = 0.05;
}

void SavingAccount::display()
{
    cout << account_num << ' ' << fixed << setprecision(2) << balance << ' ' << interest_rate << endl;
}

void SavingAccount::calculate()
{
    balance += balance * interest_rate;
}

void SavingAccount::changerate(float new_rate)
{
    interest_rate = new_rate;
}