//
// Created by Mukkund Sunjii on 19/08/2020.
//

#ifndef SIMPLE_BANKING_ACCOUNT_COLLECTION_H
#define SIMPLE_BANKING_ACCOUNT_COLLECTION_H

#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

class Account_Collection {
private :
    std::vector<std::shared_ptr<Account>> accounts;

    void Push_Account(std::shared_ptr<Account> acc);


public :

    const std::vector<std::shared_ptr<Account>> &getAccounts() const;

    bool Add_Account(std::string name, double balance = 0.0, int type = 1);

    std::shared_ptr<Account> Search_Accounts(std::string acc_no) const;

};


#endif //SIMPLE_BANKING_ACCOUNT_COLLECTION_H
