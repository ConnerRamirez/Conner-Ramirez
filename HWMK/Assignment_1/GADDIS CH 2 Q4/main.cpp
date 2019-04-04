/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Conner
 */

#include <iostream>
using namespace std;

int main()
{
	double MealCost = 88.65,
		   Tax		= MealCost * .0675,
		   Tip 		= (MealCost + Tax) * .20,
		   TBill	= MealCost + Tax + Tip;

	cout << "Meal cost = $" << MealCost << endl;
	cout << "Tax amount = $" << Tax << endl;
	cout << "Tip amount = $" << Tip << endl;
	cout << "Total bill = $" << TBill << endl;
	return 0;
}