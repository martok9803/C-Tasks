#include <iostream>


void printSmallest(double a, double b, double c ) 
{
	double smallest = a;

	if (b < smallest)
	{
		smallest = b;
	}
	if (c < smallest)
	{
		smallest = c;
	}
	std::cout << "The smallest integer is: " << smallest << "\n.";
}



int main()
{
	double num1, num2, num3;
	std::cout << "Enter three interegs: \n";
	std::cin >> num1 >> num2 >> num3;

	printSmallest(num1, num2, num3);

	return 0;
}

