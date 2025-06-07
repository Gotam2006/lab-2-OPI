#ifndef IF1_H
#define IF1_H

/**
 * @brief Інтерфейс If1
 * 
 * Описує метод meth1, який має бути реалізований у похідних класах.
 */
class If1 {
public:
    virtual ~If1() = default;

    /**
     * @brief Абстрактний метод meth1.
     * 
     * Має бути реалізований класами, які реалізують цей інтерфейс.
     */
    virtual void meth1() = 0;
};

#endif // IF1_H
