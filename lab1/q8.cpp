#include <iostream>


int main(){
    int english, nepali, maths, science, social, total;
    float marks;
    std::cout << "Enter marks of the subjects" << std::endl;
    std::cout << "English: ";
    std::cin >> english;
    std::cout << "Nepali: ";
    std::cin >> nepali;
     std::cout << "Maths: ";
    std::cin >> maths;
    std::cout << "Science: ";
    std::cin >> science;
    std::cout << "Social: ";
    std::cin >> social;
    total = english + nepali + maths + science + social;
    marks  = (float(total)/500)*100;
    std::cout << "Total marks: " << total << std::endl;
    std::cout << "Marks in percentage: " << marks << "%" << std::endl;
    return 0;
}
