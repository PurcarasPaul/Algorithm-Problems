#include <iostream>
using namespace std;

int T, N;

int rezolvare(int numar)
{
	int raspuns = 1;
	for (int i = 2;i <= numar;i++)
		raspuns = raspuns * i;
	return raspuns%10;
}

void citire()
{
	cin >> T;
	for (int i = 1;i <= T;i++)
	{
		cin >> N;
		cout<<rezolvare(N)<<endl;
	}
}

int main()
{
	citire();
	return 0;
}