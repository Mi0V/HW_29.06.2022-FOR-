#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int number, degree = 0;
	std::cout << "Enter the number: ";
	std::cin >> number;
	std::cout << "Enter the degree: ";
	std::cin >> degree;
	double buffer = number;
	if (degree > 0)
	{
		for (int new_degree = degree; new_degree > 0; new_degree--) // Или можно for (int new_degree = 1; new_degree <= degree; new_degree++)
		{
		buffer *= number;
			std::cout << buffer << std::endl;
		}

	}
	else
	{
		for (int new_degree = degree; new_degree < 0; new_degree++) // Или можно for (int new_degree = 1; new_degree <= degree; new_degree++)
		{
			buffer *= number;
			buffer /= 10;
			std::cout << buffer << std::endl;
		}
	}


}