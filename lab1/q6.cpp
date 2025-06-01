#include <iostream>

int main()
{
    int a, b;
    std::cout << "enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Arithematic Operations of the numbers are:" << std::endl;
    std::cout << "Addition: " << a + b << std::endl;
    std::cout << "Subtraction: " << a - b << std::endl;
    std::cout << "Multiplication: " << a * b << std::endl;
    std::cout << "Divison: " << a / b << std::endl;
    return 0;
}
