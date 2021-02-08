#include <iostream>
#include <string>
using namespace std;

string cuvant[1002],raspuns="yes";

void citire()
{
	int i = 1;
	while (cin >> cuvant[i])
		i++;
}

void rezolvare()
{
	for (int i = 1;i <= i - 1;i++)
		for (int j = i + 1;j <= i;j++)
			if (cuvant[i] == cuvant[j])
			{
				raspuns = "no";
				break;
			}
	cout << raspuns << endl;
}

int main()
{
	citire();
	rezolvare();
	return 0;
}