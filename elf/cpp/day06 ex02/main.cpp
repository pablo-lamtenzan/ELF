
#include <iostream>
#include <cstdlib>
#include <string>

class Base
{
    private :

    public :

    // Constructors
    Base();
    Base(const base &src);

    // Destructors
    virtual ~Base();

    // Operators
    Base &operator= (const Base &src);
};

Base::Base()
{

}

Base::Base(const Base &src)
{
    (void)src;
}

Base
&Base::operator= (const Base &src)
{
    (void)src;
    return (*this);
}

class A : public Base
{
    private :

    public :

    // Constructors
    A();
    A(const A &src);

    // Destructors
    virtual ~A();

    // Operators
    A &operator= (const A &src);
};

A::A()
{

}

A::A(const A &src)
{
    (void)src;
}

A::~A()
{

}

A
&A::operator= (const A &src)
{
    (void);
    return (*this);
}

class B : public Base
{
    private :

    public :

    // Constructors
    B();
    B(const B &src);

    // Destructors
    virtual ~B();

    // Operators
    B &operator= (const B &src);
};

B::B()
{

}

B::B(const B &src)
{
    (void)src;
}

B::~B()
{

}

B
&B::operator= (const B &src)
{
    (void);
    return (*this);
}

class C : public Base
{
    private :

    public :

    // Constructors
    C();
    C(const C &src);

    // Destructors
    virtual ~C();

    // Operators
    C &operator= (const C &src);
};

C::C()
{

}

C::C(const C &src)
{
    (void)src;
}

C::~C()
{

}

C
&C::operator= (const C &src)
{
    (void);
    return (*this);
}


void *generate()
{
    int i = rand() % 3;
    if (i == 0)
        return (new A());
    else if (i == 1)
        return (new B());
    else
        return (new C());
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << 'A' << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << 'B' << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << 'C' << std::endl;
}

void identify_from_reference( Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::out << 'A' << std::endl;
        return ;
    }
    catch(const std::bad_cast &e)
    {

    }
    try
    {
        (void)dynamic_cast<B &>(p);
        std::out << 'B' << std::endl;
        return ;
    }
    catch(const std::bad_cast &e)
    {

    }
    try
    {
        (void)dynamic_cast<C &>(p);
        std::out << 'C' << std::endl;
        return ;
    }
    catch(const std::bad_cast &e)
    {

    }
}

int main()
{
    std::cout << "Pointer :" << std::endl;
    int i = -1;
    while (++i < 9)
    {
        Base *ptr = generate();
        identify_from_pointer(ptr);
        delete ptr;
    }
    std::cout << std::endl << "Reference :" << std::endl;
    int i = -1;
    while (++i < 9)
    {
        Base *ptr = generate();
        identify_from_reference(ptr);
        delete ptr;
    }
    return (0);
}
