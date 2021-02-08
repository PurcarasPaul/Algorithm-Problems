#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int const max_number=200002;
int N, M;
vector<int>houses;
vector<int>connections[max_number];
queue<int>neighbours;

void read()
{
	int a, b;
	cin >> N >> M;
	for (int i = 1;i <= N + 1;i++)
		houses.push_back(0);
	for (int i = 1;i <= M;i++)
	{
		cin >> a >> b;
		connections[a].push_back(b);
		connections[b].push_back(a);
	}
}

void bfs()
{
	houses[1] = 1;
	neighbours.push(1);
	while (!neighbours.empty())
	{
		int node = neighbours.front();
		neighbours.pop();
		for (int i = 0;i < connections[node].size();i++)
			if (!houses[connections[node][i]])
			{
				houses[connections[node][i]] = 1;
				neighbours.push(connections[node][i]);
			}
	}
}

void print()
{
	bool connections = true;
	for (int i = 1;i <= N;i++)
		if (houses[i] == 0)
		{
			cout << i << endl;
			connections = false;
		}
	if (connections == true)
		cout << "Connected" << endl;
}

int main()
{
	read();
	bfs();
	print();
	return 0;
}