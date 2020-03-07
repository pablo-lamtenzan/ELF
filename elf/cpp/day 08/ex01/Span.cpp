
#include "Span.hpp"

Span::Span() : __n(0), __container()
{

}

Span::Span(unsigned int n) : __n(n), __container()
{

}

Span::Span(const Span &src) : __n(src.__n), __container(src.__container)
{

}

Span::~Span()
{

}

Span
&Span::operator= (const Span &src)
{
    if (src != this)
    {
        this->__n = src.__n;
        this->__container = src.__container;
    }
    return (*this);
}

void
Span::addNumber(int num)
{
    if (this->__container.size() >= n)
        throw Span::SpanException();
    this->__container.push_back(num);
}

int
Span::shortestSpan(int num) const
{
    if (this->__container.size() <= 1)
        throw Span::SpanException();
    std::vector<int>::const_iterator i = this->__container.begin() - 1;
    std::vector<int>::const_iterator y = this->__container.begin() - 1;
    std::vector<int> spans(this->__container);
    while (++i != this->__container.end())
    {
        int diff = INT_MAX;
        y = this->__container.begin() - 1;
        while (++y != this->__container.end())
        {
            if (y - this->__container.begin() != i - spans.begin())
                diff = std::min(std::abs(*i - *y), diff);
            *i = diff;
        }
    }
    return *std::min_element(spans.begin(), spans.end());
}

int
Span::longestSpan() const
{
    if (this->__container.size() <= 1)
        throw Span::SpanException();
    int min = *std::min_element(this->__container.begin(), this->__container.end())
    int max = *std::max_element(this->__container.begin(), this->__container.end())
    return (max - min);
}

const char
*Span::SpanException::what() const throw()
{
    std::cout << "Span error" << std::endl;
} 