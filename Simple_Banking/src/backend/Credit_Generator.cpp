//
// Created by Mukkund Sunjii on 17/08/2020.
//

#include "../../include/Credit_Generator.h"


std::string generate_credit() {
    int target = 10;
    std::string credit_company = "400000";
    std::string credit_no = credit_company + generate_digits(target);
    std::cout << "\nYour credit card number is " << credit_no;
    return credit_no;
}

std::string generate_pin() {
    int target = 4;
    std::string pin_no = generate_digits(target);
    std::cout << "\nYour pin code is " << pin_no;
    return pin_no;
}

std::string generate_digits(int target) {
    /* initialize random seed: */
    srand(time(NULL));
    std::string const legalChars(
            "0123456789");
    std::string results;
    while (results.size() != target) {
        results += legalChars[rand() % legalChars.size()];
    }
    return results;
}

