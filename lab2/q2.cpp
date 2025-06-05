#include <iostream>
#include <algorithm>

int main()
{
    int a, b, c, largest;
    std::cout << "Enter 3 numbers: " << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "largest number is: " << std::max(a, std::max(b, c));
}