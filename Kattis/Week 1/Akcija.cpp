#include <iostream>
#include <algorithm>
using namespace std;

bool sortare(int a, int b)
{
    return b < a;
}

int main()
{
    int N, C[100001],s=0,nr=0,sf=0;
    cin >> N;
    for (int i = 1;i <= N;i++)
        cin >> C[i];
    sort(C+1,C+N+1,sortare);
    for (int i = 1;i <= N;i++)
    {
        if (nr == 2)
            nr = 0;
        else
        {
            s = s + C[i];
            nr++;
        }
    }
    cout << s;
}