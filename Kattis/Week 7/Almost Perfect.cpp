#include <iostream>
#include <math.h>
using namespace std;

long long divisor_sum;

void print(long long int numar)
{
    if (divisor_sum == numar)
        cout << numar << " " << "perfect" << endl;
    else if (numar - divisor_sum >= -2 && numar - divisor_sum <= 2)
        cout << numar << " " << "almost perfect" << endl;
    else cout << numar << " " << "not perfect" << endl;
}

void solution(long long int numar)
{
    divisor_sum = 1;

    for (long long i = 2;i <= sqrt(numar);i++)
    {
        if (numar % i == 0)
        {
            if (i == (numar / i))
                divisor_sum += i;
            else
                divisor_sum += (i + numar / i);
        }
    }
}

int main()
{
    long long n;

    while (cin >> n)
    {
        solution(n);
        print(n);
    }

    return 0;
}