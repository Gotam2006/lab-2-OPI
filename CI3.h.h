#ifndef CI3_H
#define CI3_H

#include "CI2.h"

class CI3 {
private:
    CI2* ci2;

public:
    CI3(CI2* ci2);
    void callCI2Methods();
    void show();
};

#endif // CI3_H

               