#include <iostream>
using namespace std;

char word[32];
int i = 1;

void citire()
{
	while (cin >> word[i])
		i++;
}

void rezolvare()
{
	for (int j = 1;j <= i;j++)
	{
		if (word[j] == 's')
		{
			if (word[j + 1] == word[j])
			{
				cout << "hiss" << endl;
				return;
			}
		}
	}
	cout << "no hiss" << endl;
}


int main()
{
	citire();
	rezolvare();
	return 0;
}