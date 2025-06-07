#include <iostream>
#include "CI3.h"

CI3::CI3(CI2* ci2) : ci2(ci2) {}

void CI3::callCI2Methods() {
    if (ci2) {
        ci2->callCI1Meths();
        ci2->show();
    }
}

void CI3::show() {
    std::cout << "CI3::show()" << std::endl;
}
