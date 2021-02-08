#include <iostream>
using namespace std;

int testcase;

void determinant(int A[2][2])
{
    int det;

    det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    for (int i = 0;i < 2;i++)
        for (int j = 0;j < 2;j++)
            A[i][j] /= det;
}

void multiply(int A[2][2])
{
    A[0][1] *= -1;
    A[1][0] *= -1;
}

void switch_position(int A[2][2])
{
    int aux = A[0][0];
    A[0][0] = A[1][1];
    A[1][1] = aux;
}

void print(int A[2][2])
{
    cout << "\nCase " << ++testcase << ":";
    for (int i = 0;i < 2;i++)
    {
        cout << endl;
        for (int j = 0;j < 2;j++)
            cout << A[i][j] << " ";
    }
    cout << endl;
}

int main()
{
    int number1, number2, number3, number4;

    while (cin >> number1 >> number2 >> number3 >> number4)
    {
        int A[2][2] = { {number1,number2}, {number3,number4} };

        switch_position(A);
        multiply(A);
        determinant(A);
        print(A);
    }

    return 0;
}