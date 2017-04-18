//Chance Daily
//Assignment 3.8

#include <iostream>
#include <string>

int main() {

	std::string question, size, pepperoni, veggies, extraCheese;
	bool pepPrice = false;
	bool vegPrice = false;
	bool chezPrice = false;
	bool response = false;

	double total, totalWithTax;
	double small = 5.00;
	double medium = 7.00;
	double large = 9.00;

	total = 0.0;

	std::cout << "Welcome to Gazola's. Order a pizza and get out." << std::endl;

	do {
		std::cout << "What size would you like? Small, Medium, or Large? ";
		std::cin >> size;
		if (size == "Small" || size == "small" || size == "s" || size == "S") {
			total = 5.00;
			std::cout << "Would you like pepperoni on that? ";
			std::cin >> pepperoni;
			if (pepperoni == "yes" || pepperoni == "Yes" || pepperoni == "Y" || pepperoni == "y")
				pepPrice = true;
			std::cout << "Would you like veggies on that? ";
			std::cin >> veggies;
			if (veggies == "yes" || veggies == "Yes" || veggies == "Y" || veggies == "y")
				vegPrice = true;
			std::cout << "Would you like extra cheese on that? ";
			std::cin >> extraCheese;
			if (extraCheese == "yes" || extraCheese == "Yes" || extraCheese == "Y" || extraCheese == "y")
				chezPrice = true;
		}

		if (size == "Medium" || size == "medium" || size == "m" || size == "M") {
			total = 7.00;
			std::cout << "Would you like pepperoni on that? ";
			std::cin >> pepperoni;
			if (pepperoni == "yes" || pepperoni == "Yes" || pepperoni == "Y" || pepperoni == "y")
				pepPrice = true;
			std::cout << "Would you like veggies on that? ";
			std::cin >> veggies;
			if (veggies == "yes" || veggies == "Yes" || veggies == "Y" || veggies == "y")
				vegPrice = true;
			std::cout << "Would you like extra cheese on that? ";
			std::cin >> extraCheese;
			if (extraCheese == "yes" || extraCheese == "Yes" || extraCheese == "Y" || extraCheese == "y")
				chezPrice = true;
		}

		if (size == "Large" || size == "large" || size == "l" || size == "L") {
			total = 9.00;
			std::cout << "Would you like pepperoni on that? ";
			std::cin >> pepperoni;
			if (pepperoni == "yes" || pepperoni == "Yes" || pepperoni == "Y" || pepperoni == "y")
				pepPrice = true;
			std::cout << "Would you like veggies on that? ";
			std::cin >> veggies;
			if (veggies == "yes" || veggies == "Yes" || veggies == "Y" || veggies == "y")
				vegPrice = true;
			std::cout << "Would you like extra cheese on that? ";
			std::cin >> extraCheese;
			if (extraCheese == "yes" || extraCheese == "Yes" || extraCheese == "Y" || extraCheese == "y")
				chezPrice = true;
		}

		std::cout << "Would you like to change your order? ";
		std::cin >> question;

	} while (question == "yes" || question == "Yes" || question == "Y" || question == "y");


	if (pepPrice = true)
		total += 1.00;
	if (vegPrice = true)
		total += 0.75;
	if (chezPrice = true)
		total += 0.50;

	totalWithTax = total * 1.07;

	std::cout << "Your total is $" << total << std::endl;
	std::cout << "With tax it comes to $" << totalWithTax << std::endl;
}