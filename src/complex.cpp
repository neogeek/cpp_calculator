#include <iostream>
#include <stdlib.h>

int main() {

    char equation[100];

    int currentIndex = -1;

    do {

        currentIndex += 1;

        if (currentIndex % 2) {

            std::cout << "Enter operator: ";

        } else {

            std::cout << "Enter number: ";

        }

        std::cin >> equation[currentIndex];

    } while (equation[currentIndex] != '=');

    float result = (float)atof(&equation[0]);

    for (int i = 1; i < currentIndex; i += 2) {

        if (equation[i] == '+') result += (float)atof(&equation[i + 1]);
        else if (equation[i] == '-') result -= (float)atof(&equation[i + 1]);
        else if (equation[i] == '/') result /= (float)atof(&equation[i + 1]);
        else if (equation[i] == '*') result *= (float)atof(&equation[i + 1]);

    }

    printf("The result is: %f\n", result);

}
