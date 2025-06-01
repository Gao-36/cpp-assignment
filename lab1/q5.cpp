#include <iostream>

int main()
{
    int n, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    while (n != 0)
    {
        int rem = n % 10;
        sum += rem * rem;
        n = n / 10;
    }
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
