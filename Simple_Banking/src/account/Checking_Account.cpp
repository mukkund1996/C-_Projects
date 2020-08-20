//
// Created by Mukkund Sunjii on 17/08/2020.
//

#include "../../include/Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
        : Account{name, balance} {
}

bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    return Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) const {
    os << "[Checking_Account: " << name << ": " << balance << "]";
}

Checking_Account::~Checking_Account() = default;

