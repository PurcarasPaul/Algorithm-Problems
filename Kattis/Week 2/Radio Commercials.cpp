#include <iostream>
#include <algorithm>
using namespace std;

int N, P, V[100002], profit[100002],ct_numere;

void citire()
{
    cin >> N >> P;
    for (int i = 1;i <= N;i++)
    {
        cin >> V[i];
        V[i] = V[i] - P;
        if (V[i] <= 0)
            ct_numere++;
    }
}

bool sortare(int a,int b)
{
    return a > b;
}

void tiparire()
{
    cout << profit[1] << endl;
}

void rezolvare()
{
    for (int i = 1;i <= N;i++)
    {
        if (V[i] > V[i] + profit[i - 1])
            profit[i] = V[i];
        else profit[i] = V[i] + profit[i - 1];
    }
    sort(profit + 1, profit + 1 + N, sortare);
}

int main()
{
    citire();
    if (ct_numere != N)
        rezolvare();
    else cout << 0;
    tiparire();
    return 0;
}