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
	double Cost 	 = 14.95,
		   Profit	 = .35,
		   SellPrice = Cost * (1 + Profit);

	cout << "The selling price on a circuit board ";
	cout << "that costs $" << Cost << " is $" << SellPrice;
	return 0; 
}