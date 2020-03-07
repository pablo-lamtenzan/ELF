#include "mutantstack.hpp"

template <typename T, typename Container>
MutantStack::MutantStack() : __c(NULL);
{

}

template <typename T, typename Container>
MutantStack::MutantStack(const Conatiner &c = Container()) : __c(c);
{

}

template <typename T, typename Container>
MutantStack::MutantStack(const MutantStack &src) : __c(scr.__c)
{

}

template <typename T, typename Container>
MutantStack::~MutantStack()
{

}

MutantStack
&MutantStack::operator= (const MutantStack &src)
{
    if (&src != this)
        this->__c = src__c;
    return (*this);
}

template <typename T, typename Container>
bool
MutantStack::empty() const
{
    return (this->__c.empty());
}

template <typename T, typename Container>
T
&MutantStack::top()
{
    return (this->__c.front());
}

template <typename T, typename Container>
T
&MutantStack::top() const
{
    return (this->__c.front());
}

template <typename T, typename Container>
void
MutantStack::push(const Container &x)
{
    this->__c.push_front(x);
}

template <typename T, typename Container>
void
MutantStack::pop()
{
    this->__c.pop_front();
}

template <typename T, typename Container>
SIZE_TYPE
MutantStack::size() const
{
    return (this->c.size());
}

template <typename T, typename Container>
ITERATOR
MutantStack::begin()
{
    return (this->__c.begin());
}

template <typename T, typename Container>
ITERATOR
MutantStack::end()
{
    return (this->__c.end());
}

template <typename T, typename Container>
CONST_ITERATOR
MutantStack::begin() const
{
    return (this->__c.begin());
}

template <typename T, typename Container>
CONST_ITERATOR
MutantStack::end() const
{
    return (this->__c.end());
}
template <typename T, typename Container>
REVERSE_ITERATOR
MutantStack::rbegin()
{
    return (this->__c.rbegin());
}

template <typename T, typename Container>
REVERSE_ITERATOR
MutantStack::rend()
{
    return (this->__c.rend());
}

template <typename T, typename Container>
CONST_REVERSE_ITERATOR
MutantStack::rbegin() const
{
    return (this->__c.rbegin());
}

template <typename T, typename Container>
CONST_REVERSE_ITERATOR
MutantStack::rend()
{
    return (this->__c.rend());
}

