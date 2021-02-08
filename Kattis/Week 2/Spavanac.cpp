#include <iostream>
using namespace std;

int H, M;

void citire()
{
	cin >> H >> M;
}

void rezolvare()
{
	if (M >= 45)
		M = M - 45;
	else if(M<45&&H>0)
	{
		H--;
		M = M + 60 - 45;
	}
	else if (M < 45 && H <= 0)
	{
		H = 23;
		M = M + 60 - 45;
	}
	cout << H << " " << M<<endl;
}

int main()
{
	citire();
	rezolvare();
	return 0;
}