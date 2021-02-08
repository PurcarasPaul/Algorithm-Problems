#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;
    cout << name[0];
    for (int i = 0;i <= size(name);i++)
        if (name[i] == '-')
            cout <<name[i+1];
}