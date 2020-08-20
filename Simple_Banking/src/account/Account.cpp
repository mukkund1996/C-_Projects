//
// Created by Mukkund Sunjii on 17/08/2020.
//

#include "../../include/Account.h"

Account::Account(std::string name, double balance)
        : name{name}, balance{balance}  {
    setAccountNo();
    setPinNo();
}

bool Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else
        return false;
}

void Account::print(std::ostream &os) const {
    os << "[Account: " << name << ": " << balance << "]";
}

const std::string &Account::getAccountNo() const {
    return account_no;
}

void Account::setAccountNo() {
    account_no = generate_credit();
}

const std::string &Account::getPinNo() const {
    return pin_no;
}

void Account::setPinNo() {
    pin_no = generate_pin();
}

double Account::getBalance() const {
    return balance;
}

const std::string &Account::getName() const {
    return name;
}

Account::~Account() = default;