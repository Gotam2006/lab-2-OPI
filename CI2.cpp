#include <iostream>
#include "CI2.h"

CI2::CI2(CI1* ci1) : ci1(ci1) {}

void CI2::callCI1Meths() {
    if (ci1) {
        ci1->callMeth1();
        ci1->callMeth2();
        ci1->show();
    }
}

void CI2::show() {
    std::cout << "CI2::show()" << std::endl;
}
