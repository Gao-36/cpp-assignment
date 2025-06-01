#include <iostream>


int main(){
    int sec;
    std::cout << "Enter time in seconds: ";
    std::cin >> sec;
    std::cout << "Input in seconds converted into: " << std::endl;
    std::cout << "Hour/s: " << sec/(60*60) << std::endl;
    std::cout << "Minute/s: " << sec/60 << std::endl;
    std::cout << "Second/s: " << sec << std::endl;
    return 0;
}
