#include <iostream>
#include <string>
using namespace std;

string solutie = "valid";
int ct[10][10], ct_diag1[10][10], ct_diag2[10][17], ct_queen;
char table[10][10];

void citire()
{
    for (int i = 1;i <= 8;i++)
        for (int j = 1;j <= 8;j++)
        {
            cin >> table[i][j];
            if (table[i][j] == '*')
                ct_queen++;
        }
}

void raspuns()
{
    for (int i = 0;i <= 8;i++)
        for (int j = 0;j <= 8;j++)
            if (ct[i][j] > 1 || ct_diag1[i][j] > 1)
            {
                solutie = "invalid";
                return;
            }
    for (int i = 0;i <= 8;i++)
        for (int j = 0;j <= 16;j++)
            if (ct_diag2[i][j] > 1)
            {
                solutie = "invalid";
                return;
            }
}

void diagonal2()
{
    for (int i = 0;i <= 9;i++)
        for (int j = 0;j <= 9;j++)
            if (table[i][j] == '*')
                ct_diag2[0][j + i]++;
}

void diagonal1()
{
    for (int i = 0;i <= 9;i++)
        for (int j = 0;j <= 9;j++)
            if (table[i][j] == '*')
            {
                if (i >= j)
                    ct_diag1[i - j][0]++;
                else if (i < j)
                    ct_diag1[0][j - i]++;
            }
}

void vertical_orizontal()
{
    for (int i = 0;i <= 9;i++)
        for (int j = 0;j <= 9;j++)
            if (table[i][j] == '*')
            {
                ct[i][0]++;
                ct[0][j]++;
            }
}

void rezolvare()
{
    if (ct_queen == 8)
    {
        vertical_orizontal();
        diagonal1();
        diagonal2();
        raspuns();
        cout << solutie << endl;
    }
    else cout << "invalid" << endl;
}

int main()
{
    citire();
    rezolvare();
    return 0;
}