// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

std::string getTheInput()
{
	std::string input_string;
	std::cin >> input_string;
	return input_string;
}

void handleTheOutput(std::string output_string)
{
	std::cout << output_string;
}

void printEndOfLine()
{
	std::cout << std::endl;
}

int main()
{
	std::string first_name, last_name;
	int humans_age, dogs_age;
	double confidence_percentage_float;

	// Getting a first name
	handleTheOutput("Enter your first name: ");
	first_name = getTheInput();

	// Getting a last name
	handleTheOutput("Enter your last name: ");
	last_name = getTheInput();

	// Getting an age
	handleTheOutput("Enter your age: ");
	humans_age = std::stoi(getTheInput());
	dogs_age = humans_age * 7;

	// Getting a condifedence coefficient
	handleTheOutput("Enter your confidence in programmers in percentage (0-100): ");
	confidence_percentage_float = std::stod(getTheInput()) / 100;

	// Printing a fist half of an output
	printEndOfLine();
	handleTheOutput("Hello " + first_name + " " + last_name + ", nice to meet you!");
	printEndOfLine();
	handleTheOutput("You might be " + std::to_string(humans_age) + " in human years, but in dog years you are " + std::to_string(dogs_age));
	printEndOfLine();

	// Printing a lat half of an output
	if (confidence_percentage_float < 0.5)
		handleTheOutput("I agree, programmers can't be trusted!");
	else
		handleTheOutput("Writing good code takes hard work! ");

	printEndOfLine();
	return 0;
}


