//
// Created by Mukkund Sunjii on 17/08/2020.
//

#include "../../include/I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}

I_Printable::~I_Printable(){}