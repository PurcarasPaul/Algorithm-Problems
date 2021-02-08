#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool descending(int a, int b)
{
    return a > b;
}

int solution(vector<int> C,int &s)
{
    sort(C.begin(), C.end(), descending);

    for (int i = 0;i < C.size();i++)
    {
        if ((i+1)%3!=0)
        {
            s += C[i];
        }
    }

    return s;
}

int main()
{
    vector<int> C;
    int N, s = 0;

    cin >> N;
    for (int i = 0;i < N;i++)
    {
        int temp;
        cin >> temp;
        C.push_back(temp);
    }

    cout << solution(C, s) << endl;
    
    return 0;
}