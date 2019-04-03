#include <iostream>

int main() {

    std::cout << "Enter first number: ";

    float firstNumber;

    std::cin >> firstNumber;

    std::string mathOperator;

    std::cout << "Enter operator: ";

    std::cin >> mathOperator;

    std::cout << "Enter second number: ";

    float secondNumber;

    std::cin >> secondNumber;

    float result = firstNumber;

    if (mathOperator == "+") result += secondNumber;
    else if (mathOperator == "-") result -= secondNumber;
    else if (mathOperator == "/") result /= secondNumber;
    else if (mathOperator == "*") result *= secondNumber;
    else throw "Invalid operator.";

    printf("The result of %f %s %f = %f\n", firstNumber, mathOperator.c_str(), secondNumber, result);

}
