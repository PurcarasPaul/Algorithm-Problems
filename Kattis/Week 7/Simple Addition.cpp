#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> number1_digits, number2_digits;

void print(vector<int> big_number)
{
    for (int i = 0;i < big_number.size();i++)
    {
        cout << big_number[i];
    }
    cout << endl;
}

void solution(vector<int> biggest_number,vector<int> smallest_number)
{
    int cur_digit = biggest_number.size() - 1;

    for (int i = smallest_number.size()-1;i >= 0;i--)
    {
        biggest_number[cur_digit--] += smallest_number[i];
    }

    for (int i = biggest_number.size() - 1;i > 0;i--)
    {
        if (biggest_number[i] > 9)
        {
            biggest_number[i] -= 10;
            biggest_number[i - 1] += 1;
        }
    }

    print(biggest_number);
}

void read()
{
    string number1, number2;
    cin >> number1 >> number2;

    for (int i = 0;i < number1.length();i++)
        number1_digits.push_back(number1[i] - '0');

    for (int i = 0;i < number2.length();i++)
        number2_digits.push_back(number2[i] - '0');
}

int main()
{
    read();

    if (number1_digits.size() > number2_digits.size())
        solution(number1_digits,number2_digits);
    else
        solution(number2_digits,number1_digits);

    return 0;
}