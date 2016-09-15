#include <vector>
#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> nums(n * n);
	for (int i = 0; i < (n * n); i++)
	{
		std::cin >> nums[i];
	}

	int sumPrimaryDiagonal = 0;
	for (int i = 0; i < (n * n); i += (n + 1))
	{
		sumPrimaryDiagonal += nums[i];
	}

	int sumSecondaryDiagonal = 0;
	for (int i = (n - 1); i < ((n * n) - 1); i += (n - 1))
	{
		sumSecondaryDiagonal += nums[i];
	}

	int difference = sumPrimaryDiagonal - sumSecondaryDiagonal;
	difference = (difference < 0) ? -(difference) : difference;

	std::cout << difference << std::endl;

	return 0;
}