#include <iostream>

int main()
{
    int num, sum = 0;
    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;
    while (num != 0)
    {
        int rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    std::cout << "The sum is: " << sum << std::endl;
}