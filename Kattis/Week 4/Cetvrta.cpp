#include <iostream>
#include <algorithm>
using namespace std;

int x[4], y[4];

void citire()
{

	for (int i = 1;i <= 3;i++)
		cin >> x[i] >> y[i];
	for(int i=1;i<=2;i++)
		for (int j = i+1;j <= 3;j++)
		{
			if (x[i] == x[j])
				x[i] = x[j] = 0;
			if (y[i] == y[j])
				y[i] = y[j] = 0;
		}
}

void rezolvare()
{
	sort(x + 1, x + 4);
	sort(y + 1, y + 4);
	cout << x[3] << " " << y[3] << endl;
}

int main()
{
	citire();
	rezolvare();
	return 0;
}