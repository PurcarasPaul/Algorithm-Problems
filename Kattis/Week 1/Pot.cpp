#include <iostream>
using namespace std;

int main()
{
    int N, X, P,S=1,R=0,aux;
    cin >> N;
    for (int i = 1;i <= N;i++)
    {
        cin >> P;
        aux = P % 10;
        P = P / 10;
        for (int j = 1;j <= aux;j++)
        {
            S = S * P;

        }
        R = R + S;
        S = 1;
    }
    cout << R;
}