#ifndef LAB111_CI1_H
#define LAB111_CI1_H

namespace lab111 {

class If1 {
public:
    virtual void meth1() = 0;
    virtual ~If1() = default;
};

class If2 : public If1 {
public:
    virtual void meth2() = 0;
};

class CI1 {
private:
    If1* if1;
    If2* if2;

public:
    CI1(If1* i1, If2* i2);
    void callMeth1();
    void callMeth2();
    void show();
};

} // namespace lab111

#endif // LAB111_CI1_H
