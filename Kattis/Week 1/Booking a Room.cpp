#include <iostream>
using namespace std;

int main()
{
    int r, n, camere[101],temp,br=0;
    cin >> r >> n;
    for (int i = 1;i <= r;i++)
        camere[i] = i;
    for (int i = 1;i <= n;i++)
    {
            cin >> temp;
            camere[temp] = 0;
            br++;
    }
    if (br == r)
        cout << "too late";
    else for (int i = 1;i <= r;i++)
    {
        if (camere[i] != 0)
        {
            cout << camere[i];
            break;
        }
    }
}