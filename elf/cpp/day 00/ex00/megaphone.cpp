
#include <iostream>
#include <string>

int main(int ac, char **argv)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 0;
        while (++i < ac - 1)
        {
            int j = -1;
            std::string s(argv[i]);
            while (++j < s.lenght())
                std::cout << char(toupper(s.at(j)));
        }
        std::cout << std::endl;
    }
    return (0);
}