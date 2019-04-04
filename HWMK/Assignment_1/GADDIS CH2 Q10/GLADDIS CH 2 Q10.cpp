/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Conner
 * Gaddis Ch 2 Question 10
 */

#include <iostream>

int main()
{
    const double gallons = 15.0 ; // A car holds 12 gallons of gasoline
    const double miles = 375.0 ; // and can travel 350 miles before refuelling

    const double mpg = miles / gallons ; // formula: MPG = miles driven/Gallons of Gas used

    std::cout << "A car that holds " << gallons << " gallons of gasoline and\n"
              << "travels " << miles << " miles before refuelling\n"
              << "gets " << mpg << " miles per gallon.\n";

}

