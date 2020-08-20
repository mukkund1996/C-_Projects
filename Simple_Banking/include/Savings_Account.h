//
// Created by Mukkund Sunjii on 17/08/2020.
//

#ifndef SIMPLE_BANKING_SAVING_ACCOUNT_H
#define SIMPLE_BANKING_SAVING_ACCOUNT_H

#include "Account.h"

class Savings_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate);
    virtual ~Savings_Account();
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
};


#endif //SIMPLE_BANKING_SAVING_ACCOUNT_H
