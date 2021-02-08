#include <iostream>
using namespace std;

int A[100002],data_sets, n, m, suma_max,suma;

void tiparire()
{
    cout << suma_max << endl;
}

void suma_stanga(int pozitie)
{
    suma += A[pozitie];
    for (int i = pozitie - 1;i >= 1;i--)
        if (A[i] <= m)
            break;
        else suma += A[i];
}

void suma_dreapta(int pozitie)
{
    for (int i = pozitie + 1;i <= n;i++)
        if (A[i] <= m)
            break;
        else suma += A[i];
}

void rezolvare()
{
    for (int i = 1;i <= n;i++)
        if (A[i] == m)
        {
            suma_stanga(i);
            suma_dreapta(i);
            if (suma > suma_max)
                suma_max = suma;
            suma = 0;
        }
}

void citire()
{
    cin >> data_sets;
    for (int i = 1;i <= data_sets;i++)
    {
        cin >> n >> m;
        for (int j = 1;j <= n;j++)
            cin >> A[j];
        rezolvare();
        tiparire();
        suma_max = 0;
    }
}

int main()
{
    citire();
    return 0;
}