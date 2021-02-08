#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int const maxSize = 300002;

queue<int>countries;
vector<int>partnership[maxSize];
int C, P, H, L;
float trade[maxSize], half_trade[maxSize];

void read()
{
    cin >> C >> P >> H >> L;
    for (int i = 1; i <= P; i++)
    {
        int x, y;
        cin >> x >> y;
        partnership[x].push_back(y);
        partnership[y].push_back(x);
        trade[x]++;
        trade[y]++;
    }
    for (int i = 1;i <= C;i++)
        half_trade[i] = trade[i] / 2;
}

bool verify_trade(int C)
{
    if (trade[C] > half_trade[C])
        return true;
    else
        return false;
}

void bfs(int leaver)
{
    countries.push(leaver);
    trade[leaver] = 0;
    while (!countries.empty())
    {
        int node = countries.front();
        countries.pop();
        for (int i = 0;i < partnership[node].size();i++)
            if (verify_trade(partnership[node][i]) == 1)
            {
                trade[partnership[node][i]]--;
                if (verify_trade(partnership[node][i]) != 1)
                    countries.push(partnership[node][i]);
            }
    }
}

void print()
{
    if (verify_trade(H) == 1)
        cout << "stay" << endl;
    else cout << "leave" << endl;
}

int main()
{
    read();
    bfs(L);
    print();
    return 0;
}