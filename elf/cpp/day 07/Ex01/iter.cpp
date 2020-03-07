
#include <iostream>

template <typename T>
void iter(T &array, size_t size, void (&f)(const T &)
{
    int i = -1;
    while (++i < size)
        f(array[i]);
}

// have to do some function witch takes diferentes types and
// pass them to 3rd param to iter() in a main

int main()
{
    return (0);
}