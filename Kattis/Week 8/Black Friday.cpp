#include <iostream>

int frequency_vector[6], indices[6];

void print(int people)
{
	for (int i = 5;i >= 0;i--)
	{
		if (frequency_vector[i] == 1)
		{
			std::cout << indices[i] + 1 << std::endl;
			return;
		}
	}
	
	std::cout << "none" << std::endl;
}

int main()
{
	int people;

	std::cin >> people;

	for (int i = 0;i < people;i++)
	{
		int temp;

		std::cin >> temp;

		frequency_vector[temp - 1]++;
		indices[temp - 1] = i;
	}

	print(people);

	return 0;
}