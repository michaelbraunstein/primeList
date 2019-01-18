/* Michael Braunstein
Create a list of prime numbers
*/
// primeList.cpp : This file contains the 'main' function.Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int number, loop;
	bool isPrime;

int main()
{
	
	cout << "List of Prime Numbers" << endl;
	for (number = 2; number <= 999140000; number++) {
		 
		for (loop = 2; loop*loop < number; loop++) {



			if (number % loop == 0) {
				break;
			}
			//isPrime = false;
			else if (loop + 1 > sqrt(number)) {
				cout << "this " << number << " is a prime numer." << endl;
			} //else

		}// loop
 
			} //number
				} //main
			
				  