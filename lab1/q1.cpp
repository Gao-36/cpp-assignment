#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n % 5 == 0)
    {
        std::cout << n << " is a multiple of 5" << std::endl;
    }
    else
    {
        std::cout << n << " is not a multiple of 5" << std::endl;
    }
    return 0;
}
