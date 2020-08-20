//
// Created by Mukkund Sunjii on 17/08/2020.
//

#ifndef SIMPLE_BANKING_ACCOUNT_H
#define SIMPLE_BANKING_ACCOUNT_H

#include <iostream>
#include <string>
#include "I_Printable.h"
#include "Credit_Generator.h"

class Account : public I_Printable {
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
    std::string account_no;
    std::string pin_no;
public:
    Account(std::string name = def_name, double balance = def_balance);

    const std::string &getAccountNo() const;

    const std::string &getPinNo() const;

    const std::string &getName() const;

    double getBalance() const;

    void setAccountNo();

    void setPinNo();

    virtual bool deposit(double amount);

    virtual bool withdraw(double amount);

    virtual void print(std::ostream &os) const override;

    virtual ~Account();
};

#endif //SIMPLE_BANKING_ACCOUNT_H
