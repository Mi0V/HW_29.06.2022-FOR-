#include <iostream>
#define SPACE "\t\t\t\t"
#define SPACES "\t\t"
void main()
{
	setlocale(LC_ALL, "rus");
	char ASCII = 1;
	std::cout << SPACE << "Таблица ASCII" << std::endl;
	for (int i = 1; ASCII > 0; i++)
	{
		if (ASCII % 16 == 0)
		{
			std::cout << ASCII << std::endl << SPACES;
			ASCII += 1;
		}
		else
		{
			std::cout << ASCII << " | ";
			ASCII += 1;
		}
	
	}
	for (int i = 0; ASCII <= 0; i++)
	{
		if (ASCII % 16 == 0)
		{
			std::cout << ASCII << std::endl << SPACES;
			ASCII += 1;
		}
		else
		{
			std::cout << ASCII << " | ";
			ASCII += 1;
		}
	}
}