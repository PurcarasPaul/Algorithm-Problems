#include <iostream>
using namespace std;

int main()
{
	int k, m, n;

	cin >> k >> m >> n;	

	(k % (m + n) < m) ? cout << "Barb\n" : cout << "Alex\n";

	return 0;
}