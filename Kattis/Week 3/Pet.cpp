#include <iostream>
using namespace std;

int v[6],suma_winner, suma, winner, contestant;

void rezolvare()
{
	contestant++;
	if (suma > suma_winner)
	{
		suma_winner = suma;
		winner = contestant;
	}
	suma = 0;
}

void citire()
{
	for (int j = 1;j <= 5;j++)
	{
		for (int i = 1;i <= 4;i++)
		{
			cin >> v[i];
			suma = suma + v[i];
		}
		rezolvare();
	}
}

int main()
{
	citire();
	rezolvare();
	cout << winner << " " << suma_winner<<endl;
	return 0;
}