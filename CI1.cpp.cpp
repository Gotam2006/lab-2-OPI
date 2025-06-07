#include <iostream>
#include "CI1.h"

CI1::CI1(If1* i1, If2* i2) : if1(i1), if2(i2) {}

void CI1::callMeth1() {
    if (if1) if1->meth1();
}

void CI1::callMeth2() {
    if (if2) if2->meth2();
}

void CI1::show() {
    std::cout << "CI1::show()" << std::endl;
}
