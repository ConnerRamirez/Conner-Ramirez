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
	int customers  = 16500,
		buyedrinks = customers * .15,
		citrus 	   = buyedrinks * .58;

	cout << "approximately " << buyedrinks << " customers in the survey\n";
	cout <<	"purchase one or more energy drinks per week.\n\n";
	cout << "approximately " << citrus << " customers in the survey\nprefer ";
	cout << "citrus flavored energy drinks.\n";
	return 0;
}
