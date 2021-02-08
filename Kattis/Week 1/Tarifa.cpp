#include <iostream>
using namespace std;

int main()
{
    int X, N, Pi, s = 0, sf = 0;
    cin >> X >> N;
    for (int i = 1;i <= N;i++)
    {
        cin >> Pi;
        s = s + X - Pi;
        sf = s;
    }
    cout << sf + X << endl;
}