#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int negativeCount = 0;
	int zeroCount = 0;
	int positiveCount = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		std::cin >> num;

		if (num < 0)
		{
			++negativeCount;
		}
		else if (num > 0)
		{
			++positiveCount;
		}
		else
		{
			++zeroCount;
		}
	}

	std::cout << (double)positiveCount / n << std::endl;
	std::cout << (double)negativeCount / n << std::endl;
	std::cout << (double)zeroCount / n << std::endl;

	return 0;
}