#include <iostream>
using namespace std;

int main()
{
    int v[6] = { 1,1,2,2,2,8 };
    int b[6];
    for (int i = 0;i <= 5;i++)
        cin >> b[i];
    for(int i=0;i <= 5;i++)
        cout << v[i]-b[i] << " ";
}