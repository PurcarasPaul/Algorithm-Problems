#include <iostream>
#include <string>
using namespace std;

string solutie = "valid";
char table[10][10];
int ct_queen;

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

void diag4(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
        {
            linie--;
            coloana++;
        }
}

void diag3(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
        {
            linie++;
            coloana--;
        }
}

void diag2(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
        {
            linie++;
            coloana++;
        }
}

void diag1(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
        {
            linie--;
            coloana--;
        }
}

void jos(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
            linie++;
}

void sus(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
            linie--;
}

void dreapta(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
            coloana++;
}

void stanga(int linie, int coloana)
{
    while (table[linie][coloana] != '\0')
        if (table[linie][coloana] == '*')
        {
            solutie = "invalid";
            break;
        }
        else
            coloana--;
}

void rezolvare()
{
    if (ct_queen == 8)
    {
        for (int i = 1;i <= 8;i++)
            for (int j = 1;j <= 8;j++)
                if (table[i][j] == '*')
                {
                    stanga(i, j - 1);
                    dreapta(i, j + 1);
                    sus(i - 1, j);
                    jos(i + 1, j);
                    diag1(i - 1, j - 1);
                    diag2(i + 1, j + 1);
                    diag3(i + 1, j - 1);
                    diag4(i - 1, j + 1);
                }
        cout << solutie << endl;
    }
    else cout << "invalid"<<endl;
}

int main()
{
    citire();
    rezolvare();
    return 0;
}