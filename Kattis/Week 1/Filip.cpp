#include <iostream>
using namespace std;

int A, B,raspuns,Araspuns,Braspuns;

void citire()
{
    cin >> A >> B;
}

int oglindire(int numar,int &raspuns)
{
    int oglindit=0;
    while (numar != 0)
    {
        oglindit = oglindit * 10 + numar % 10;
        numar = numar / 10;
    }
    raspuns = oglindit;
    return raspuns;
}

int rezolvare()
{
    oglindire(A, Araspuns);
    oglindire(B,Braspuns);
    if (Araspuns > Braspuns)
        raspuns = Araspuns;
    else raspuns = Braspuns;
    return raspuns;
}

int main()
{
    citire();
    cout << rezolvare();
}