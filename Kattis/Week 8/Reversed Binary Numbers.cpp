#include <iostream>
#include <math.h>
#include <vector>

int binary_to_decimal(std::vector<int> Binary_Digits)
{
    int answer = 0, power = 0;

    for (int j = Binary_Digits.size()-1;j >= 0;j--)
    {
        answer += Binary_Digits[j]*pow(2,power++);
    }

    return answer;
}

void decimal_to_binary(int N,std::vector<int> &Binary_Digits)
{
    int i = 1;
    while (N != 0)
    {
        Binary_Digits.push_back(N % 2);
        N = N / 2;
    }
}

int main()
{
    int N;
    std::vector<int> Binary_Digits;

    std::cin >> N;

    decimal_to_binary(N, Binary_Digits);
    std::cout<<binary_to_decimal(Binary_Digits);

    return 0;
}