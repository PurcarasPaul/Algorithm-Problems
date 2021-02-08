#include <iostream>
using namespace std;

int N,sum,ct,ct_even,ct_odd;

void citire()
{
	cin >> N;
}

void tiparire()
{
	if (ct_even >= 1 && ct_odd >= 1)
		cout << "Either";
	else if (ct_even >= 1)
		cout << "Even";
	else if (ct_odd >= 1)
		cout << "Odd";
}

void rezolvare()
{
	for (int i = 1;i <= 101;i++)
	{
		if (ct != N)
		{
			sum = sum + i;
			ct++;
		}
		else
		{
			if (sum % 2 == 0)
				ct_even++;
			else ct_odd++;
			sum = 0;
			ct = 0;
			i--;
		}
	}
	tiparire();
}

int main()
{
	citire();
	rezolvare();
	return 0;
}