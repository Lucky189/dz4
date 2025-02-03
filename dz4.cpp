#include <iostream>

int main()
{
    int a = 1, b = 2;
    int c = ++a + --a;

    std::cout << c << std::endl;

    return 0;
}