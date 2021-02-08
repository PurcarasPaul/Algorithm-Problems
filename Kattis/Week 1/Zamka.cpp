#include <iostream>
using namespace std;

int main()
{
    int L, D, X, N, M, V[10000], R[10000], sum = 0, sum2 = 0;
    cin >> L >> D >> X;
    for (int i = L;i <= D;i++)
    {
        if (sum == X)
            break;
        V[i] = i;
        N = V[i];
        sum = 0;
        while (V[i] != 0)
        {
            sum = sum + V[i] % 10;
            V[i] = V[i] / 10;
        }
    }
    for (int i = D;i >= L;i--)
    {
        if (sum2 == X)
            break;
        R[i] = i;
        M = R[i];
        sum2 = 0;
        while (R[i] != 0)
        {
            sum2 = sum2 + R[i] % 10;
            R[i] = R[i] / 10;
        }
    }
    cout << N << endl;
    cout << M<<endl;
}