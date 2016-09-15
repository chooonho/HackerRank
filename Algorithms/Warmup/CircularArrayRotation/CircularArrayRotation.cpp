#include <vector>
#include <iostream>

int main()
{
	int n, k, q;
	std::cin >> n;
	while (n < 1 || n > 100000)
	{
		std::cout << "Invalid n" << std::endl;
		std::cin >> n;
	}

	std::cin >> k;
	while (k < 1 || k > 100000)
	{
		std::cout << "Invalid k" << std::endl;
		std::cin >> k;
	}

	std::cin >> q;
	while (q < 1 || q > 500)
	{
		std::cout << "Invalid q" << std::endl;
		std::cin >> q;
	}

	std::vector<int> nums(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> nums[i];
		while (nums[i] < 1 || nums[i] > 100000)
		{
			std::cout << "Invalid number" << std::endl;
			std::cin >> nums[i];
		}
	}

	std::vector<int> indices(q);
	for (int i = 0; i < q; i++)
	{
		std::cin >> indices[i];
		while (indices[i] < 0 || indices[i] >= n)
		{
			std::cout << "Index out of bound" << std::endl;
			std::cin >> indices[i];
		}
	}

	for (int i = 0; i < q; i++)
	{
		int index = (indices[i] - (k % n));

		if (index >= 0)
		{
			std::cout << nums[index] << std::endl;
		}
		else
		{
			std::cout << nums[index + nums.size()] << std::endl;
		}
	}

	return 0;
}