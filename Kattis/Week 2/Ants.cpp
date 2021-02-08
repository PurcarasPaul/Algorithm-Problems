#include <iostream>
#include <algorithm>
using namespace std;

int cases, l, n, furnica[100000000], timp, timp_last, timp_early;

void tiparire()
{
    cout << timp_early << " " << timp_last << " " << endl;
}

void latest_time()
{
    timp_last = 0;
    if (l - furnica[1] > furnica[n])
        timp_last = l - furnica[1];
    else timp_last = furnica[n];
}

void earliest_time()
{
    timp_early = 0;
    for (int i = 1;i <= n;i++)
    {
        timp = min(l - furnica[i], furnica[i]);
        if (timp > timp_early)
            timp_early = timp;
    }
}

void citire()
{
    cin >> cases;
    for (int i = 1;i <= cases;i++)
    {
        cin >> l >> n;
        for (int j = 1;j <= n;j++)
            cin >> furnica[j];
        sort(furnica + 1, furnica + 1 + n);
        earliest_time();
        latest_time();
        tiparire();
    }
}

int main()
{
    citire();
    return 0;
}