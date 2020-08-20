//
// Created by Mukkund Sunjii on 20/08/2020.
//

#include "../../include/Controller.h"

void Controller::Set_Screen_State(Screen_State choice) {
    screen.set_state(choice);
}

void Controller::Switch_On() {
    Set_Screen_State(ON);
}

void Controller::Switch_Off() {
    Set_Screen_State(OFF);
    screen.Turn_Off();
}

void Controller::Create_Account() {
    screen.set_state(CREATE);
    bool entry = accounts.Add_Account(screen.Get_Name(), screen.Get_Balance(), screen.Get_Account_Type());
    if (!entry) screen.Acc_Error();
    screen.set_state(ON);
}

void Controller::Operator_Logged() {
    screen.set_state(LOGIN);
    std::shared_ptr<Account> account = accounts.Search_Accounts(screen.get_card_no());
    if (account != nullptr && Verify_Pin(screen.get_pin_no(), account->getPinNo())) {
        screen.success();
        Controller::Log_In_Menu(account);
    } else {
        screen.failure();
        screen.set_state(ON);
    }
}

void Controller::Log_In_Menu(const std::shared_ptr<Account> &account) {
    while (screen.get_state() == LOGIN) {
        screen.Welcome_User(account->getName());
        int choice = screen.menu_2();
        switch (choice) {
            case 1:
                screen.Show_Balance(account->getBalance());
                break;
            case 2:
                screen.Deposited(account->deposit(screen.Get_Deposit()));
                break;
            case 3:
                screen.Withdraw(account->withdraw(screen.Get_Withdrawal()));
                break;
            case 4:
                screen.set_state(ON);
                screen.Log_Out();
                break;
            case 0:
                Controller::Switch_Off();
                break;
            default:
                screen.Wrong_Choice();
        }

    }
}

void Controller::Main_Menu() {
    int choice = screen.menu();
    switch (choice) {
        case 1:
            Controller::Create_Account();
            break;
        case 2:
            Controller::Operator_Logged();
            break;
        case 0:
            Controller::Switch_Off();
            break;
        default:
            screen.Wrong_Choice();
    }

}

void Controller::Operator() {
    Controller::Switch_On();
    while (screen.get_state() == ON) {
        Controller::Main_Menu();
    }
}

Controller::Controller() {
    Controller::Operator();
}