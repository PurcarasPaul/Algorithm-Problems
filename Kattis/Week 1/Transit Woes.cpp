#include <iostream>
using namespace std;

int main()
{
    int s, t, n, i,di, bi, ci;
    cin >> s >> t >> n;
    for (i = 1;i <= n + 1;i++)
    {
        cin >> di;
        s = s + di;
    }
    for (i = 1;i <= n;i++)
    {
        cin >> bi;
        s = s + bi;
    }

    for (i = 1;i <= n;i++)
    {
        cin >> ci;
        s = s + ci-di;
    }

    if (s == t)
        cout << "yes";
    else cout << "no";
}