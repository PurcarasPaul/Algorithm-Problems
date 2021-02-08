#include <iostream>
#include <math.h>
using namespace std;

long long int X, k;

void citire()
{
	cin >> X;
}

void rezolvare()
{
	for (long long int i = 1;i <= sqrt(X);i++)
	{
		if (X % i == 0)
		{
			k++;
			X = X / i;
			i = 1;
		}
	}
	cout << k<< endl;
}

int main()
{
	citire();
	rezolvare();
	return 0;
}