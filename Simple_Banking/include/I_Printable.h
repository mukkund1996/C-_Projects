//
// Created by Mukkund Sunjii on 17/08/2020.
//

#ifndef SIMPLE_BANKING_I_PRINTABLE_H
#define SIMPLE_BANKING_I_PRINTABLE_H

#include <iostream>

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;

    virtual ~I_Printable();

};

#endif //SIMPLE_BANKING_I_PRINTABLE_H
