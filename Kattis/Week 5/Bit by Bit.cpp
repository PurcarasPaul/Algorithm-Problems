#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n,bit1,bit2;
string command;
vector<int> bits;

void tiparire()
{
	if (n != 0)
	{
		for (int i = 31;i >= 0;i--)
			if (bits[i] == -1)
				cout << "?";
			else cout << bits[i];
		cout << endl;
	}
}

void rezolvare(int n)
{
	for (int i = 1;i <= n;i++)
	{
		cin >> command;
		if (command == "SET")
		{
			cin >> bit1;
			bits[bit1] = 1;
		}
		else if (command == "CLEAR")
		{
			cin >> bit1;
			bits[bit1] = 0;
		}
		else if (command == "OR")
		{
			cin >> bit1 >> bit2;
			if (bits[bit1] == 1 || bits[bit2] == 1)
				bits[bit1] = 1;
			else if (bits[bit1] == -1 || bits[bit2] == -1)
				bits[bit1] = -1;
			else
				bits[bit1] = 0;
		}
		else if (command == "AND")
		{
			cin >> bit1 >> bit2;
			if (bits[bit1] == 1 && bits[bit2]== 1)
				bits[bit1] = 1;
			else if(bits[bit1]==0||bits[bit2]==0)
				bits[bit1] = 0;
			else if (bits[bit1] == -1 || bits[bit2] == -1)
				bits[bit1] = -1;
		}
	}
}

void init()
{
	bits.clear();
	for (int i = 0;i <= 31;i++)
		bits.push_back(-1);
}

void citire()
{
	do
	{
		init();
		cin >> n;
		rezolvare(n);
		tiparire();
	} while (n != 0);
}

int main()
{
	citire();
	return 0;
}