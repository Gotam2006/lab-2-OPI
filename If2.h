#ifndef IF2_H
#define IF2_H

#include "If1.h"

/**
 * @brief Інтерфейс If2, який наслідує If1.
 * 
 * Додає метод meth2 до вже наявного meth1 з If1.
 */
class If2 : public If1 {
public:
    virtual ~If2() = default;

    /**
     * @brief Абстрактний метод meth2.
     * 
     * Має бути реалізований у похідних класах.
     */
    virtual void meth2() = 0;
};

#endif // IF2_H
