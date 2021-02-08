#include <iostream>
using namespace std;

int N, lin_col, rep, rasp;

void citire()
{
	lin_col = 2, rep = 1;
	cin >> N;
}

void rezolvare()
{
	for (int i = 1;i <= N;i++)
	{
		lin_col = lin_col + rep;
		rasp = lin_col * lin_col;
		rep = rep * 2;
	}
	cout << rasp<<endl;
}

int main()
{
	citire();
	rezolvare();
	return 0;
}