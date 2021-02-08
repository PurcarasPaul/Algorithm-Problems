#include <iostream>
using namespace std;

int n, x;

int main()
{
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> x;
		if (x % 2 == 0)
			cout << x << " is even" << endl;
		else cout << x << " is odd" << endl;
	}
	return 0;
}