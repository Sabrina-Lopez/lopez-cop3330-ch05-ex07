/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>
#include <cmath>

int main() {
    double a_value;
    double b_value;
    double c_value;
    double discriminantSolution;

    std::cout << "Please input the a value of your quadratic formula. \n";
    std::cin >> a_value;

    std::cout << "Please input the b value of your quadratic formula. \n";
    std::cin >> b_value;

    std::cout << "Please input the c value of your quadratic formula. \n";
    std::cin >> c_value;

    discriminantSolution = pow(b_value, 2) - 4*(a_value)*(c_value);

    if(discriminantSolution < 0) {
        std::cout << "The quadratic equation values result in a discriminant solution with no real roots. \n";
        return 1;
    }

    double quadraticFormulaSolution1 = ((-(b_value)) + sqrt(discriminantSolution))/(2*(a_value));
    double quadraticFormulaSolution2 = ((-(b_value)) - sqrt(discriminantSolution))/(2*(a_value));

    std::cout << "The solutions, or x, for this quadratic formula are " << quadraticFormulaSolution1 << " and " << quadraticFormulaSolution2 << ". \n";

    return 0;
}
