#include <math.h>
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	while (n < 1 || n > 10)
	{
		std::cout << "Invalid n" << std::endl;
		std::cin >> n;
	}

	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int numLarge;
		std::cin >> numLarge;
		while (numLarge < 0 || numLarge > pow(10, 10))
		{
			std::cout << "Invalid integer" << std::endl;
			std::cin >> numLarge;
		}

		sum += numLarge;
	}

	std::cout << sum << std::endl;

	return 0;
}