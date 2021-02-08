#include <iostream>
using namespace std;

int b, k, g, d;

void citire()
{
    cin >> b >> k >> g;
    b--;
}

int rezolvare()
{
    if (b % (k / g) == 0)
        d = b / (k / g);
    else d = b / (k / g) + 1;
    return d;
}

int main()
{
    citire();
    cout << rezolvare() << endl;
    return 0;
}