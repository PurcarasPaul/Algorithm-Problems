#include <iostream>
using namespace std;

int main()
{
    int N;
    float q, y, s = 0;
    cin >> N;
    for (int i = 1;i <= N;i++)
    {
        cin >> q >> y;
        s = s + q * y;
    }
    cout << s;
}