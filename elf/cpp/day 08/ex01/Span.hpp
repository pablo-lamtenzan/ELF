
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span
{
    private :

    unsigned int __n;
    std::vector<int> __container;

    public :

    // Contructors

    Span();
    Span(unsigned int n);
    Span(const Span &src);

    // Destructors
    ~Span();

    // Operators
    Span &operator= (const Span &src);

    // Shared Methods
    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;

    // Sub classes
    class SpanException : public std::exception
    {
        public :

        // Shared Methods
        const char *what() const throw();
    };
};

#endif