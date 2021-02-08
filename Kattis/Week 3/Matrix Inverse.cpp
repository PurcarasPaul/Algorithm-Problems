#include <iostream>
using namespace std;

int A[3][3],number,det,ct,ct2,caz;

void determinant()
{
	det = A[1][1] * A[2][2] - A[1][2] * A[2][1];
	for (int i = 1;i <= 2;i++)
		for (int j = 1;j <= 2;j++)
			A[i][j] = A[i][j] / det;
}

void multiply()
{
	A[1][2] = A[1][2] * (-1);
	A[2][1] = A[2][1] * (-1);
}

void switch_position()
{
	int aux=A[1][1];
	A[1][1] = A[2][2];
	A[2][2] = aux;
}

void rezolvare()
{
	switch_position();
	multiply();
	determinant();
}

void tiparire()
{
	cout << "Case " << caz << ":";
	for (int i = 1;i <= 2;i++)
	{
		cout << endl;
		for (int j = 1;j <= 2;j++)
			cout << A[i][j]<<" ";
	}
	cout << endl;
}

void citire()
{
	int linie = 1, coloana = 1;
	while (cin >> number)
	{
		A[linie][coloana] = number;
		ct++;
		if (ct < 2)
			coloana++;
		else 
		{
			linie++;
			coloana = 1;
			ct = 0;
		}
		ct2++;
		if (ct2 == 4)
		{
			caz++;
			rezolvare();
			tiparire();
			ct2 = 0;
			ct = 0;
			linie = coloana = 1;
		}
	}
}

int main()
{
	citire();
	return 0;
}