#include <iostream>
#include <vector>
using namespace std;

vector<int> obstacles;

void read()
{
	int N, Y;
	cin >> N >> Y;

	for (int i = 0;i < N;i++)
	{
		obstacles.push_back(i);
	}

	for (int i = 0;i < Y;i++)
	{
		int temp;
		cin >> temp;
		obstacles[temp]=-1;
	}
}

void print()
{
	int ct_obstacles_found = 0;

	for (int i = 0;i < obstacles.size();i++)
	{
		if (obstacles[i] >= 0)
			cout << obstacles[i] << endl;
		else ct_obstacles_found++;
	}

	cout << "Mario got " << ct_obstacles_found << " of the dangerous obstacles." << endl;
}

int main()
{
	read();
	print();
	return 0;
}