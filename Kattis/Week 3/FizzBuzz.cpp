#include <iostream>
using namespace std;

int X, Y, N;

void citire()
{
	cin >> X >> Y >> N;
}

void rezolvare()
{
	for (int i = 1;i <= N;i++)
	{
		if (i % X == 0)
		{
			if (i % Y == 0)
				cout << "FizzBuzz" << endl;
			else cout << "Fizz" << endl;
		}
		else if (i % Y == 0)
			cout << "Buzz" << endl;
		else cout << i << endl;
	}
}

int main()
{
	citire();
	rezolvare();
	return 0;
}