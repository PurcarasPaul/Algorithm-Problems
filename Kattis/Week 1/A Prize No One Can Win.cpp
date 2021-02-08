#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, X,items[100001],ct=0,suma;
    cin >> n >> X;
    for (int i = 1;i <= n;i++)
        cin >> items[i];
    sort(items + 1, items + n + 1);
    for (int i = 1;i <= n;i++)
    {
        suma = items[i] + items[i - 1];
        if (suma <= X)
            ct++;
    }
    if(ct>0)
        cout << ct;
    else cout<<1;
}