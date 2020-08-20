//
// Created by Mukkund Sunjii on 17/08/2020.
//

#ifndef SIMPLE_BANKING_CHECKING_ACCOUNT_H
#define SIMPLE_BANKING_CHECKING_ACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account : public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);

    virtual ~Checking_Account();

    virtual bool withdraw(double) override;

    virtual void print(std::ostream &os) const override;
};


#endif //SIMPLE_BANKING_CHECKING_ACCOUNT_H
