#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int number = 1, number_2 = 1;
	std::cout << "Сейчас на экран будет выведена таблица пифагора" << std::endl;
	for (int i = 0; i < 81; i++)
	{
		if (number_2 == 9)
		{
			int num = number * number_2;
			if (num < 10)
			{
				std::cout << num << " " << "|";
			}
			else
			{
				std::cout << num << "|";	
			}
			number += 1;
			number_2 = 1;
			std::cout << std::endl;
		}
		else
		{
			int num = number * number_2;
			number_2 += 1;
			if (num < 10)
			{
				std::cout << num << " " << "|";
			}
			else
			{
				std::cout << num << "|";
			}
		}
	}
}