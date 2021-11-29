/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a_value; //declare double to hold the a value of the quadratic equation
    double b_value; //declare double to hold the b value of the quadratic equation
    double c_value; //declare double to hold the c value of the quadratic equation
    double discriminantSolution; //delcare double to hold the result of the discriminant formula

    //tell the user to input the a value of their quadratic equation
    cout << "Please input the a value of your quadratic equation. \n";
    cin >> a_value; //get the user's a value

    //tell the user to input the b value of their quadratic equation
    cout << "Please input the b value of your quadratic equation. \n";
    cin >> b_value; //get the user's b value

    //tell the user to input the c value of their quadratic equation
    cout << "Please input the c value of your quadratic equation. \n";
    cin >> c_value; //get the user's c value

    //calculate whether the quadratic equation has two distinct roots, two repeated roots, or no real roots using the quadratic equation values and the discriminant formula
    discriminantSolution = pow(b_value, 2) - 4*(a_value)*(c_value);

    if(discriminantSolution < 0) { //if the discriminant value is less than 0, then it the quadratic equation has no real roots
        //tell the user that the quadratic equation values result in no real roots
        cout << "The quadratic equation values result in a discriminant solution with no real roots. \n";
        return 1; //the program has thus failed
    }

    //calculate the x values via the quadratic formula
    double quadraticFormulaSolution1 = ((-(b_value)) + sqrt(discriminantSolution))/(2*(a_value));
    double quadraticFormulaSolution2 = ((-(b_value)) - sqrt(discriminantSolution))/(2*(a_value));

    //tell the user the x values aka the quadratic formula solutions that have been calculated from their a, b, and c values
    cout << "The solutions, or x, for this quadratic formula are " << quadraticFormulaSolution1 << " and " << quadraticFormulaSolution2 << ". \n";

    return 0;
}
