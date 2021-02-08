#include <iostream>
using namespace std;

struct three
{
    int elem, suma, verif_m;
}A[100002];

int data_sets, n, m, ct_m, suma_max, suma_inainte_m, schimb_suma = 1;

void reset()
{
    ct_m = suma_inainte_m = suma_max = 0;
    for (int i = 1;i <= schimb_suma;i++)
    {
        A[i].suma = 0;
        A[i].verif_m = 0;
    }
    schimb_suma = 1;
}

void tiparire()
{
    for (int i = 1;i <= schimb_suma;i++)
        if (A[i].suma > suma_max&& A[i].verif_m == 1)
            suma_max = A[i].suma;
    cout << suma_max << endl;
}

void rezolvare()
{
    for (int i = 1;i <= n;i++)
    {
        if (A[i].elem >= m)
            A[schimb_suma].suma += A[i].elem;
        else
        {
            schimb_suma++;
            suma_inainte_m = 0;
        }
        if (A[i].elem == m)
        {
            ct_m++;
            A[schimb_suma].verif_m = 1;
        }
        if (ct_m == 1 && A[i].elem > m)
            suma_inainte_m += A[i].elem;
        if (ct_m == 2)
        {
            ct_m = 1;
            A[schimb_suma].suma -= A[i].elem;
            schimb_suma++;
            A[schimb_suma].suma += A[i].elem + suma_inainte_m;
            A[schimb_suma].verif_m = 1;
            suma_inainte_m = 0;
        }
    }
}

void citire()
{
    cin >> data_sets;
    for (int i = 1;i <= data_sets;i++)
    {
        cin >> n >> m;
        for (int j = 1;j <= n;j++)
            cin >> A[j].elem;
        rezolvare();
        tiparire();
        reset();
    }
}

int main()
{
    citire();
    return 0;
}