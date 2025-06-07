#ifndef CI2_H
#define CI2_H

#include "CI1.h"

class CI2 {
private:
    CI1* ci1;

public:
    CI2(CI1* ci1);
    void callCI1Meths();
    void show();
};

#endif // CI2_H
