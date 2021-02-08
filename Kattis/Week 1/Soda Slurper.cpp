#include <iostream>
using namespace std;

int main()
{
    int e, f, c, s = 0, r = 0;
    cin >> e >> f >> c;
    s = e + f;
    while (s >= c) 
    {
        s = s - c;
        r++;
        s++;
    }
    cout <<r;
}