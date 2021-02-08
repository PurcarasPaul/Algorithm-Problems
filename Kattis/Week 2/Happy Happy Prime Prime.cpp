#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int P, K, m, ct_cifre = 0;
string raspuns;

void tiparire()
{
    cout << K << " " << m << " " << raspuns << endl;
}

bool verificare_prime(int numar)
{
    for (int i = 2;i <= numar-1;i++)
    {
        if (numar % i == 0)
            return false;
    }
    return true;
}

int verificare_happy(int numar)
{
    int numar_aux = numar,numar_rezultat=0;
    while (numar_aux != 0)
    {
        numar_rezultat = numar_rezultat + pow(numar_aux % 10, 2);
        numar_aux = numar_aux / 10;
    }
    if (numar_rezultat == 1)
        return 1;
    else if (numar_rezultat == 4)
        return 0;
    return verificare_happy(numar_rezultat);
}

bool verificare(int numar)
{
    if (numar == 1)
        return false;
    else if (verificare_prime(numar) == 0)
        return false;
    else if (verificare_happy(numar) == 0)
        return false;
    else return true;
}

void rezolvare(int m)
{
    if (verificare(m) == 1)
            raspuns = "YES";
    else raspuns = "NO";
}

void ALL_INCLUSIVE()   
{
    cin >> P;
    for (int i = 1;i <= P;i++)
    {
        cin >> K >> m;
        rezolvare(m);
        tiparire();
    }
}

int main()
{
    ALL_INCLUSIVE();
    return 0;
}