// Exercise3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


bool isPrime(int number)
{
	bool is_prime_res = true;
	for (int i = 2; i < number; i++) 
		if (number % i == 0)
		{
			is_prime_res = false;
			break;
		}
	return is_prime_res;
}

int main()
{
	int sum_of_prime_numbers = 0, product_of_prime_numbers = 1;
	for (int i = 2; i <= 1000; i++)
		if (isPrime(i))
			{
				sum_of_prime_numbers += i;
				product_of_prime_numbers *= i;
			}
    std::cout << "The sum of every prime number between 1-1000 is: " << sum_of_prime_numbers << std::endl;
	std::cout << "The product of every prime number between 1-1000 is: " << product_of_prime_numbers << std::endl;
	return 0;
}


