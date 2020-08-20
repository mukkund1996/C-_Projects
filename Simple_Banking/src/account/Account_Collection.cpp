//
// Created by Mukkund Sunjii on 19/08/2020.
//

#include "../../include/Account_Collection.h"

#include <utility>

const std::vector<std::shared_ptr<Account>> &Account_Collection::getAccounts() const {
    return accounts;
}

void Account_Collection::Push_Account(std::shared_ptr<Account> acc) {
    accounts.push_back(acc);
}

bool Account_Collection::Add_Account(std::string name, double balance, int type) {
    /*
     * 0. Account
     * 1. Savings Account
     * 2. Checking Account
     * 3. Trust Account
    */
    switch(type){
        case 0:
            Account_Collection::Push_Account(std::make_shared<Account>(name, balance));
            return true;
        case 1:
            Account_Collection::Push_Account(std::make_shared<Savings_Account>(name, balance, 5.0));
            return true;
        case 2:
            Account_Collection::Push_Account(std::make_shared<Checking_Account>(name, balance));
            return true;
        case 3:
            Account_Collection::Push_Account(std::make_shared<Trust_Account>(name, balance, 2.5));
            return true;
        default:
            return false;
    }
}

std::shared_ptr<Account> Account_Collection::Search_Accounts(std::string acc_no) const {
    for (auto acc : accounts){
        if (acc->getAccountNo() == acc_no)
            return acc;
    }
    std::cout<<"\nAccount not found!";
    return nullptr;
}


