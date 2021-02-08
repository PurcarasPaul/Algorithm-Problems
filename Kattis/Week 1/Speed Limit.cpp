#include <iostream>
using namespace std;

int main()
{
    int n, s, t;
    for (int i = 1;i <= 10;i++)
    {
            int suma = 0, aux = 0;
            cin >> n;
            for (int j = 1;j <= n;j++)
            {
                cin >> s >> t;
                suma = suma + s * (t - aux);
                aux = t;
            }
            if (n != -1)
                cout << suma << " miles" << endl;
            else break;
    }
}