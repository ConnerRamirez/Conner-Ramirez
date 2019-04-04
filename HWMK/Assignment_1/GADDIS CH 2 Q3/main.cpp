/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Conner
 *
 */


#include <iostream>
using namespace std;

int main()
{
	int 	Price	 = 95;
	double	State	 = Price * .04,
			County	 = Price * .02,
			TotalTax = State + County;

	cout << "Purchase Price = $" << Price << endl;
	cout << "State tax = $" << State << endl;
	cout << "County tax = $" << County << endl;
	cout << "Total Tax = $" << TotalTax << endl;
	return 0;
}
