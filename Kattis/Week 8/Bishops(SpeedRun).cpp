#include <iostream>

int main()
{
    int table;

    while (std::cin >> table)
    {
        (table == 1) ? std::cout << 1 << std::endl
                     : std::cout << 2 * (table - 1) << std::endl;
    }

    return 0;
}