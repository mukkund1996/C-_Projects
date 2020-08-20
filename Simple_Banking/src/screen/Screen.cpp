//
// Created by Mukkund Sunjii on 17/08/2020.
//

#include <menu.h>
#include "../../include/Screen.h"

Screen_State Screen::get_state() const {
    return state;
}

int Screen::menu() const {
    int choice;
    std::cout << "\n\n1. Create Account";
    std::cout << "\n2. Log into Account";
    std::cout << "\n0. Exit\n";
    std::cin >> choice;
    return choice;
}


std::string Screen::get_card_no() const {
    std::string card_no;
    std::cout << "\nEnter your card number: ";
    std::cin >> card_no;
    return card_no;
}

std::string Screen::get_pin_no() const {
    std::string pin_no;
    std::cout << "\nEnter your PIN: ";
    std::cin >> pin_no;
    return pin_no;
}

void Screen::success() const {
    std::cout << "\nYou have successfully logged in.";
}

void Screen::failure() const {
    std::cout << "\nInvalid credentials. Login denied!";
}

void Screen::generate(const std::string &card_no) const {
    std::cout << "\nYour new card number is: ";
    std::cout << card_no;
}

int Screen::menu_2() const {
    int choice;
    std::cout << "\n1. Balance";
    std::cout << "\n2. Deposit";
    std::cout << "\n3. Withdraw";
    std::cout << "\n4. Log out";
    std::cout << "\n0. Exit\n";
    std::cin >> choice;
    return choice;
}

void Screen::set_state(Screen_State choice) {
    state = choice;
}

std::string Screen::Get_Name() {
    std::string name;
    std::cout << "\nPlease enter your name: ";
    std::cin >> name;
    return name;
}

double Screen::Get_Balance() {
    double deposit;
    std::cout << "\nPlease enter your first deposit: ";
    std::cin >> deposit;
    return deposit;
}

int Screen::Get_Account_Type() {
    int type;
    std::cout << "\n1. Savings Account";
    std::cout << "\n2. Checking Account";
    std::cout << "\n3. Trust Account\n";
    std::cin >> type;
    return type;
}

void Screen::Show_Balance(double balance) {
    std::cout << "\nYour Account balance is: " << balance;
}

double Screen::Get_Deposit() {
    double deposit;
    std::cout << "\nPlease enter your deposit amount: ";
    std::cin >> deposit;
    return deposit;
}

double Screen::Get_Withdrawal() {
    double with;
    std::cout << "\nPlease enter your withdrawal amount: ";
    std::cin >> with;
    return with;
}

void Screen::Deposited(bool success) {
    if (success)
        std::cout<<"\nThe amount has been deposited.";
    else
        std::cout<<"\nThe amount cannot be deposited.";
}

void Screen::Withdraw(bool success) {
    if (success)
        std::cout<<"\nThe amount has been withdrawn.";
    else
        std::cout<<"\nThe amount cannot be withdrawn.";
}

void Screen::Log_Out() {
    std::cout<<"\nSuccessfully logged out!";
}

void Screen::Turn_Off() {
    std::cout<<"\nThank you for using the XYZ Bank. Have a great day!";
}

void Screen::Wrong_Choice() {
    std::cout<<"\nPlease enter a valid choice.";
}

void Screen::Welcome_User(std::string name) {
    std::cout<<"\n\nWelome "<< name;
}

void Screen::Acc_Error() {
    std::cout<<"\nCould not add the account!";
}
