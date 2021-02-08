#include <iostream>
using namespace std;

int N, Y,V_obstacole[202], ct_obstacole_found, V_obstacole_found[202];

void citire()
{
	cin >> N >> Y;
	for (int i = 1;i <= N;i++)
		V_obstacole[i] = i;
	for (int i = 1;i <= Y;i++)
	{
		cin >> V_obstacole_found[i];
		V_obstacole[V_obstacole_found[i]] = -1;
	}
}

void rezolvare()
{
	for (int i = 0;i <= N - 1;i++)
	{
		if (V_obstacole[i] >= 0)
			cout << V_obstacole[i] << endl;
		else ct_obstacole_found++;
	}
	cout << "Mario got " << ct_obstacole_found << " of the dangerous obstacles."<<endl;
}

int main()
{
	citire();
	rezolvare();
	return 0;
}