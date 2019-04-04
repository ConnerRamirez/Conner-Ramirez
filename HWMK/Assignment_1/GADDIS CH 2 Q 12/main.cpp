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

int main() {
	// amount of square feet in an acre of land
	const int ACRE = 43560;
	double land = 391876;

	// convert this number of square feet into acres.
	double acres = land / ACRE;
	
	std::cout << land << " square feet = " << acres << " acres.\n";

	return 0;
}