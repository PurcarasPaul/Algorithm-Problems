#include <iostream>
using namespace std;

int l, r, x;

void citire()
{
    cin >> l >> r;
}

void rezolvare()
{
    if ((l + r) == 0)
    {
        cout << "Not a moose"<< endl;
        return;
    }
    if (l==r)
    {
        x = l + r;
        cout << "Even " << x<<endl;
    }
    else
    {
        if (l > r)
            x = l * 2;
        else x = r * 2;
        cout << "Odd " << x<<endl;
    }
}

int main()
{
    citire();
    rezolvare();
    return 0;
}