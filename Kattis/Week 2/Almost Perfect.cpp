#include <iostream>
#include <math.h>
using namespace std;

long long int divisor_sum;

void tiparire(long long int numar)
{
    if (divisor_sum == numar)
        cout << numar << " " << "perfect" << endl;
    else if (numar - divisor_sum >= -2 && numar - divisor_sum <= 2)
        cout << numar << " " << "almost perfect" << endl;
    else cout << numar << " " << "not perfect" << endl;
}

void rezolvare(long long int numar)
{
    divisor_sum = 1;
    for (long long int i = 2;i <= sqrt(numar);i++)
    {
        if (numar % i == 0)
            if (i == (numar / i))
                divisor_sum += i;
            else
                divisor_sum += (i + numar / i);
    }
}

void citire()
{
    long long int n;
    while (cin >> n)
    {
        rezolvare(n);
        tiparire(n);
    }
}

int main()
{
    citire();
    return 0;
}