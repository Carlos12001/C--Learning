#include <iostream>
using namespace std;
class A
{
public:
    int x = 20;
protected:
    int y;
private:
    int z;
};

class B : public A
{
// x is public
// y is protected
// z is not accessible from B
};

class C : protected A
{
// x is protected
// y is protected
// z is not accessible from C
};

class D : private A    // 'private' is default for classes
{
// x is private
// y is private
// z is not accessible from D
};

class Entity{
public:
    std::string getName(){
        return "Entity";
    }
};

class Player : public Entity{
protected:
    std::string name;
public:
    Player(const std::string& name) : name(name){}

    std::string getName(){
        return name;
    }
};

class base {
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() override { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; } //This is wrong!
};


int main(){
    A a = A();
    std::cout<< a.x << std::endl;

    Entity e1 = Entity();
    std::cout<< e1.getName() << std::endl;

    Player player = Player("Carlos");
    Entity e2 = player;
    std::cout << e2.getName() << std::endl;


    base *p;
    derived obj1;
    p = &obj1;

    // Early binding because fun1() is non-virtual
    // in base
    p->fun_1();

    // Late binding (RTP)
    p->fun_2();

    // Late binding (RTP)
    p->fun_3();

    // Late binding (RTP)
    p->fun_4();

    // Early binding but this function call is
    // illegal (produces error) because pointer
    // is of base type and function is of
    // derived class
    // p->fun_4(5);

}
