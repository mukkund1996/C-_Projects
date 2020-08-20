//
// Created by Mukkund Sunjii on 20/08/2020.
//

#ifndef SIMPLE_BANKING_CONTROLLER_H
#define SIMPLE_BANKING_CONTROLLER_H

#include "Screen.h"
#include "Account_Collection.h"
#include "Credit_verifier.h"

class Controller {

private:
    Screen screen;

    Account_Collection accounts;

    void Set_Screen_State(Screen_State choice);

    void Switch_On();

    void Switch_Off();

    void Create_Account();

    void Operator_Logged();

    void Log_In_Menu(const std::shared_ptr<Account>& account);

    void Main_Menu();

    void Operator();

public:
    Controller();
};


#endif //SIMPLE_BANKING_CONTROLLER_H
