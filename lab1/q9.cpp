#include <iostream>
#include <cmath>

void solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        std::cout << "This is not a quadratic equation!" << std::endl;
        return;
    }
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2*a);
        double x2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "Roots are real and different:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2*a);
        std::cout << "Roots are real and equal:" << std::endl;
        std::cout << "x = " << x << std::endl;
    }
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        std::cout << "Roots are complex:" << std::endl;
        std::cout << "x1 = " << realPart << " + " << imagPart << "i" << std::endl;
        std::cout << "x2 = " << realPart << " - " << imagPart << "i" << std::endl;
    }
}

int main() {
    double a, b, c;
    
    std::cout << "Enter coefficient a: ";
    std::cin >> a;
    std::cout << "Enter coefficient b: ";
    std::cin >> b;
    std::cout << "Enter coefficient c: ";
    std::cin >> c;
    
    solveQuadratic(a, b, c);
    
    return 0;
}