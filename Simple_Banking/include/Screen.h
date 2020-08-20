//
// Created by Mukkund Sunjii on 17/08/2020.
//

#ifndef SIMPLE_BANKING_SCREEN_H
#define SIMPLE_BANKING_SCREEN_H

#include "iostream"

enum Screen_State {
    ON,
    CREATE,
    LOGIN,
    OFF
};

class Screen {
private:
    Screen_State state;

public:
    Screen_State get_state() const;

    void set_state(Screen_State choice);

    std::string Get_Name();

    double Get_Balance();

    int Get_Account_Type();

    int menu() const;

    int menu_2() const;

    std::string get_card_no() const;

    std::string get_pin_no() const;

    void generate(const std::string &card_no) const;

    void success() const;

    void failure() const;

    void Show_Balance(double balance);

    double Get_Deposit();

    double Get_Withdrawal();

    void Deposited(bool success);

    void Withdraw(bool success);

    void Log_Out();

    void Turn_Off();

    void Wrong_Choice();

    void Welcome_User(std::string name);

    void Acc_Error();
};


#endif //SIMPLE_BANKING_SCREEN_H
