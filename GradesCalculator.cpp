#include <iostream>

void printGradesInWords(double grade)
{
	if (grade >= 2 && grade <= 2.99)
	{
		std::cout << "Fail\n";
	}
	else if (grade >= 3 && grade <= 3.49)
	{
		std::cout << "Poor\n";
	}
	else if (grade >= 3.50 && grade <= 4.49)
	{
		std::cout << "Good\n";
	}
	else if (grade >= 4.50 && grade <= 5.49)
	{
		std::cout << "Very Good\n";
	}
	else if (grade >= 5.50 && grade <= 6.00)
	{
		std::cout << "Excellent\n";
	}
	else
	{
		std::cout << "Invalid grade. Must be between 2.00 and 6.00\n";
	}
}



int main()
{
	double userGrade;
	std::cout << "Enter your grade between 2.00 and 6.00: \n";
	std::cin >> userGrade;

	if (userGrade >= 2.00 && userGrade <= 6.00)
	{
		printGradesInWords(userGrade);
	}
	else
	{
		std::cout << "Invalid Input. Grade must be between 2.00 and 6.00.\n";
	}
	return 0;
}
