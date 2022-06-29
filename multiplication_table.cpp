#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	int number, num_1, num;
	std::cout << "Enter the number for which you want to see the multiplication table: ";
	std::cin >> number;
	std::cout << "How much do you want to multiply it: ";
	std::cin >> num_1;
	for (int i = 0; i <= num_1; i++)
	{
		num = number * i;
		std::cout << number << "*" << i << "=" << num << std::endl;

	}
}