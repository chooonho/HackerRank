#include <iostream>

int main()
{
	const int CATEGORIES_COUNT = 3;

	int a[CATEGORIES_COUNT];
	int b[CATEGORIES_COUNT];

	for (int i = 0; i < CATEGORIES_COUNT; i++)
	{
		std::cin >> a[i];
		while (a[i] < 0 || a[i] > 100)
		{
			std::cout << a[i] << " is an invalid points!" << std::endl;
			std::cin >> a[i];
		}
	}

	for (int i = 0; i < CATEGORIES_COUNT; i++)
	{
		std::cin >> b[i];
		while (b[i] < 0 || b[i] > 100)
		{
			std::cout << b[i] << " is an invalid points!" << std::endl;
			std::cin >> b[i];
		}
	}

	int scoreA = 0;
	int scoreB = 0;
	for (int i = 0; i < CATEGORIES_COUNT; i++)
	{
		if (a[i] > b[i])
		{
			++scoreA;
		}
		else if (a[i] < b[i])
		{
			++scoreB;
		}
	}

	std::cout << scoreA << " " << scoreB << std::endl;

	return 0;
}