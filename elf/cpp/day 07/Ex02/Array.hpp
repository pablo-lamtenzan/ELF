
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
# include <exception>

template <typename T>
class Array
{
    private :

    T *__array;
    unsigned int __size;

    public :

    // Contructor 
    Array();
    Array(unsigned int n);
    Array(const Array<T> &src);

    // Destructors
    ~Array();

    // Operators
    Array<T> &operator= (const Array &src);
    Array<T> &operator[] (unsigned int i);
    Array<T> &operator[] (unsigned int i) const;

    // Shared Methods
    unsigned int size() const;

    // Shared Classes
    class ArrayFailException : public std::exception
    {
        private :

        private :

        // Shared Methods
        virtual char const *what() const throw();
    };
};

template <typename T>
Array<T>::Array() : __array(NULL), __size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : new T[n](), __size(n)
{

}

template <typename T>
Array<T>::Array(const Array<T> &src)
{
    if (&src && src.len)
    {
        this->__array = new T[c.len];
        int i = -1;
        while (++i < src.__size)
            this->__array[i] = src.__array[i];
    }
    this->__size = src.__size;
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    if (this->__array)
        delete[] this->__array;
}

template <typename T>
T
Array<T>::operator= (const Array<T> &src)
{
    delete [] this->__array;
    this->__array = NULL;
    if (&src != this && src.size)
    {
        this->__array = new T[src.size];
        int i = -1;
        while (++i)
            this->__array[i] = src.__array[i];
    }
    this->__size = src.__size;
    return (*this);
}

template <typename T>
T
Array<T>::operator[] (unsigned int i)
{
    if (!this->__array || i > this->__len)
        throw ArrayFailException();
    return (this->__array[i]);
}

template <typename T>
T
Array<T>::operator[] (unsigned int i) const
{
    if (!this->__array || i > this->__len)
        throw ArrayFailException();
    return (this->__array[i]);
}

template <typename T>
unsigned int
Array<T>::size() const
{
    return this->__size;
}

template <typename T>
const char
*Array<T>::ArrayFailExeption::what() const throw()
{
    std::cout << "index supplied causes array overflow" << std::endl;
}

#endif