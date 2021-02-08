#include <iostream>
#include <algorithm>
using namespace std;

int N, V[1002],V_Special[1002],first[1002],last[1002], ct,ct_special,ct_zero;

void tiparire()
{
    for (int i = 1;i <= N - ct ;i++)
    {
        if (V[i] == 0 && ct_zero == 0)
        {
            cout << "-";
            ct_zero++;
        }
        else if (V[i] != 0)
            cout << V[i];
        if (V[i + 1] != 0 && V[i] != 0)
        {
            cout << " ";
            ct_zero = 0;
        }
    }
}

void citire()
{
    cin >> N;
    for (int i = 1;i <= N;i++)
        cin >> V[i];
}

void rezolvare()
{
    sort(V + 1, V + 1 + N);
    ct_special = 1;
    for (int i = 1;i <= N;i++)
    {
        if(V[i + 1] - V[i] == 1)
            ct++;
        else if(V[i+1]-V[i]!=1 &&V[i]-V[i-1]==1)
        {
            if (ct >= 2)
            {
                first[ct_special] = V[i - ct];
                last[ct_special] = V[i];
                for (int j = i-ct + 1;j <= i - 1;j++)
                    V[j] = 0;
                ct_special++;
                ct = 0;
            }
            ct = 0;
        }
    }
}

int main()
{
    citire();
    rezolvare();
    tiparire();
    return 0;
}