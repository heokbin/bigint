#include <iostream>
#include <string>

std::string sum (std::string num1, std::string num2);
std::string sub (std::string num1, std::string num2);

int main() {
    std::string num1 = "";
    std::cout << "First number  >> ";
    std::cin >> num1;

    std::string num2 = "";
    std::cout << "Second number >> ";
    std::cin >> num2;

    std::cout << "Sum           >> " << sum(num1,num2) << std::endl;
    std::cout << "Sub           >> " << sub(num1,num2) << std::endl;
}