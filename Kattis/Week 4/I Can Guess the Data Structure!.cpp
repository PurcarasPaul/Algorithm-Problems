#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int raspuns_stiva=1, raspuns_coada=1, raspuns_priority_coada=1,comanda,n,x;
queue <int> coada;
priority_queue <int> priority_coada;
stack <int> stiva;

void tiparire()
{
	if (raspuns_stiva == 1 && raspuns_coada == 0 && raspuns_priority_coada == 0)
		cout << "stack" << endl;
	else if (raspuns_stiva == 0 && raspuns_coada == 1 && raspuns_priority_coada == 0)
		cout << "queue" << endl;
	else if (raspuns_stiva == 0 && raspuns_coada == 0 && raspuns_priority_coada == 1)
		cout << "priority queue" << endl;
	else if (raspuns_stiva == 0 && raspuns_coada == 0 && raspuns_priority_coada == 0)
		cout << "impossible" << endl;
	else cout << "not sure" << endl;
}

void reset()
{
	raspuns_stiva = raspuns_coada = raspuns_priority_coada = 1;
	while (!stiva.empty())
		stiva.pop();
	while (!coada.empty())
		coada.pop();
	while (!priority_coada.empty())
		priority_coada.pop();
}

void citire()
{
	while (cin >> n)
	{
		for (int i = 1;i <= n;i++)
		{
			cin >> comanda;
			if (comanda == 1)
			{
				cin >> x;
				if(raspuns_stiva==1)
					stiva.push(x);
				if (raspuns_coada == 1)
					coada.push(x);
				if (raspuns_priority_coada == 1)
					priority_coada.push(x);
			}
			else
			{
				cin >> x;
				if (stiva.empty() || stiva.top() != x)
					raspuns_stiva = 0;
				else stiva.pop();
				if (coada.empty() || coada.front() != x)
					raspuns_coada = 0;
				else coada.pop();
				if (priority_coada.empty() || priority_coada.top() != x)
					raspuns_priority_coada = 0;
				else priority_coada.pop();
			}
		}
		tiparire();
		reset();
	}
}

int main()
{
	citire();
	return 0;
}