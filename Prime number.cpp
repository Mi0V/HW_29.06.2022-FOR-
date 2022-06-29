#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int number, numm = 0;
	std::cout << "Ёто программа по вывлению р€да простых чисел\n" << "¬ведите число: ";
	std::cin >> number;
	for (int i = 0; numm <= number; i++)
	{
		if (numm == 2 || numm == 3 || numm == 5 || numm == 7)
		{
			std::cout << numm << std::endl;
		}
		if (numm % 2 != 0 && numm % 3 != 0 && numm % 5 != 0 && numm % 7 != 0)
		{
			std::cout << numm << std::endl;

		}
		numm += 1;
	}

}