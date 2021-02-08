#include <iostream>
#include <algorithm>
#include <climits>

void calculate_max_left(int v[],int max_left[],int n)
{
    max_left[0] = INT_MIN;

    for (int i = 1; i < n; i++)
        max_left[i] = std::max(max_left[i - 1], v[i - 1]);
}

void calculate_min_right(int v[],int min_right[],int n)
{
    min_right[n - 1] = INT_MAX;

    for (int i = n - 2; i >= 0; i--)
        min_right[i] = std::min(min_right[i + 1], v[i + 1]);
}

void count_pivots(int v[],int max_left[],int min_right[],int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= max_left[i] && v[i] <= min_right[i])
            count++;
    }

    std::cout << count << std::endl;
}

int main()
{
    int n;
    int* v, *max_left, *min_right;

    std::cin >> n;

    v = new int[n];
    max_left = new int[n];
    min_right = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    calculate_max_left(v,max_left,n);
    calculate_min_right(v,min_right,n);
    count_pivots(v, max_left, min_right, n);

    return 0;
}