#ifndef IF3_H
#define IF3_H

#include "If2.h"

/**
 * @brief Інтерфейс If3, який наслідує If2.
 * 
 * Додає метод meth3 до вже наявних meth1 і meth2.
 */
class If3 : public If2 {
public:
    virtual ~If3() = default;

    /**
     * @brief Абстрактний метод meth3.
     * 
     * Має бути реалізований у похідних класах.
     */
    virtual void meth3() = 0;
};

#endif // IF3_H
