
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <list>

#define SIZE_TYPE Container::size_type
#define ITERATOR Container::iterator
#define CONST_ITERATOR Container::const_iterator
#define REVERSE_ITERATOR Container::reverse_iterator
#define CONST_REVERSE_ITERATOR Container::const_reverse_itertator

template <typename T, typename Container>
class MutantStack
{
    private :

    Container __c;

    public :

    // Contructors
    MutantStack();
    explicit MutantStack(const Container &c = Container())
    MutantStack(const MutantStack &src);

    // Destructors
    ~MutantStack();

    // Operators
    MutantStack &operator= (const MutantStack &src);

    // Shared Methods
    bool empty() const;
    T &top();
    const T &top();
    void push(const T &x);
    void pop();
    SIZE_TYPE size() const;
    ITERATOR begin();
    ITERATOR end();
    CONST_ITERATOR begin() const;
    CONST_ITERATOR end() const;
    REVERSE_ITERATOR rbegin();
    REVERSE_ITERATOR rend();
    CONST_REVERSE_ITERATOR rbegin() const;
    CONST_REVERSE_ITERATOR rend() const;
};

#endif