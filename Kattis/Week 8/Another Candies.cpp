#include <iostream>

void read(int kids, long long & candies_sum)
{
	for (int i = 0;i < kids;i++)
	{
		long long candies;

		std::cin >> candies;

		candies_sum += candies % kids;
	}
}

void print(int kids, long long candies_sum)
{
	if (candies_sum % kids)
		std::cout << "NO" << std::endl;
	else
		std::cout << "YES" << std::endl;
}

int main()
{
	int test_cases,kids;

	std::cin >> test_cases;

	for (int i = 0;i < test_cases;i++)
	{
		long long candies_sum = 0;

		std::cin >> kids;

		read(kids, candies_sum);
		print(kids, candies_sum);
	}

	return 0;
}