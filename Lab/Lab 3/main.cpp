/*
 * Calculate the percentage Gas Tax on a gallon of gas, and the profit made from a gallon of gas given
 */

/* 
 * File:   main.cpp
 * Author: Conner
 *
 * Created on March 24, 2019, 4:11 PM
 */

#include <iostream> 

int main() {
    
   float gastax;  
   float profit;
   float salestax = .8; 
   float excisetax = .39; 
   float captax = .4;
   float fedtax = 18.4;

   gastax= salestax+excisetax+captax * .8;
   profit= (salestax+excisetax+captax * .8) * 6.5;

   printf("Gas Tax = %.2f%%", gastax);
   printf("\nProfit = %.2f%%", profit);

   return 0;
}