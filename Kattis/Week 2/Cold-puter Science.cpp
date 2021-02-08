#include <iostream>
using namespace std;

int n, v[102],raspuns;

int all()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> v[i];
        if (v[i] < 0)
            raspuns++;
    }
    return raspuns;
}

int main()
{
    cout << all()<<endl;
    return 0;
}