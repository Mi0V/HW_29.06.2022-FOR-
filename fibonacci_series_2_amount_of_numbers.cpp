#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int number, num_1 = 0, num_2 = 1;
	std::cout << "How many fibonacci numbers do you want to see: ";
	std::cin >> number;
	if (number == 1)
	{
		std::cout << num_1 << std::endl;
	}
	else
	{
		std::cout << num_1 << std::endl << num_2 << std::endl;
	}
	for (int i = 2; i < number; i += 2)
	{
		if (number - 1 == i)
		{
			num_1 += num_2;
			std::cout << num_1 << std::endl;
		}
		else
		{
			num_1 += num_2;
			num_2 += num_1;
			std::cout << num_1 << std::endl << num_2 << std::endl;
		}
	}
}