#include <iostream>
using namespace std;

struct vector
{
	int numar[5001];
	int pozitie[5001];
}V1;

int n, V2[5001], V_Rezultat[5001];

void sortare()
{
	for (int i = 1;i <= n - 1;i++)
		for (int j = i;j <= n;j++)
		{
			if (V1.numar[i] > V1.numar[j])
			{
				int aux_numar, aux_pozitie;
				aux_numar = V1.numar[i];
				V1.numar[i] = V1.numar[j];
				V1.numar[j] = aux_numar;

				aux_pozitie = V1.pozitie[i];
				V1.pozitie[i] = V1.pozitie[j];
				V1.pozitie[j] = aux_pozitie;
			}
			if (V2[i] > V2[j])
			{
				int aux_numar2;
				aux_numar2 = V2[i];
				V2[i] = V2[j];
				V2[j] = aux_numar2;
			}
		}
}

void tiparire()
{
	for (int i = 1;i <= n;i++)
		cout << " " << V_Rezultat[i] << endl;
}

void rezolvare()
{
	sortare();
	for (int i = 1;i <= n;i++)
		V_Rezultat[V1.pozitie[i]] = V2[i];
	tiparire();
}

void ALL_INCLUSIVE()
{
	cin >> n;
	while (n != 0)
	{
		for (int i = 1;i <= n;i++)
		{
			cin >> V1.numar[i];
			V1.pozitie[i] = i;
		}
		for (int i = 1;i <= n;i++)
			cin >> V2[i];
		rezolvare();
		cin >> n;
	}
}

int main()
{
	ALL_INCLUSIVE();
	return 0;
}