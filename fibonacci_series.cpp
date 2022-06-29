#include <iostream>

void main()


{
	setlocale(LC_ALL, "rus");
	int number, num_1 = 0, num_2 = 1, num_3 = 0;
	int num = 0;
	std::cout << "This is fibonacci series, enter the number: ";
	std::cin >> number;
	std::cout << num_1 << std::endl << num_2 << std::endl;
	for(int i = 0; i < number ;i += num)
	{
		num_1 += num_2;
		if (num_1 <= number)
		{
			std::cout << num_1 << std::endl;
		}
		num_2 += num_1;
		if (num_2 <= number)
		{
			std::cout << num_2 << std::endl;
		}
		num = num_2;
		
	}
	std::cout << "FINILLY " << num << " " << number << std::endl;
	
}