#include <iostream>

void calculator()
{
    std::cout << "enter the first number please" << std::endl;
    double firstNumber;
    std::cin >> firstNumber;
    std::cout << "enter the second number please" << std::endl;
    double secondNumber;
    std::cin >> secondNumber;
    std::cout << "enter the operator(+,-,*,/) please" << std::endl;
    char op;
    std::cin >> op;
    switch (op){
        case '+':;
        std::cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << std::endl;
        break;
        case '_':;
        std::cout << firstNumber << " - " << secondNumber <<" = " << firstNumber - secondNumber << std::endl;
        break;
        case  '*':;
        std::cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << std::endl;
        break;
        case  '/':;
        if (secondNumber!=0) {
            std::cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << std::endl;
        } else {
            std::cout << "errror"<< std::endl;
        }
        break;
        default:
            std::cout << "invalid operator" << std::endl;

    }
}
int main(){
    calculator();
    return 0;
}