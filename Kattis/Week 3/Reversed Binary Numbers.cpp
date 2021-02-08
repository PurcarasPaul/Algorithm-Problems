#include <iostream>
#include <math.h>
using namespace std;

long long int N,raspuns,putere,V[102],i=1;

void citire()
{
	cin >> N;
}	

void binar_to_decimal()
{
	for(int j=i-1;j>=1;j--)
	{
		V[j]=V[j] * pow(2, putere);
		putere += 1;
		raspuns += V[j];
	}
}

void decimal_to_binar()
{
	while (N != 0)
	{
		V[i] = N % 2;
		N = N / 2;
		i++;
	}
}

int rezolvare()
{
	decimal_to_binar();
	binar_to_decimal();
	return raspuns;
}

int main()
{
	citire();
	cout << rezolvare() << endl;
	return 0;
}