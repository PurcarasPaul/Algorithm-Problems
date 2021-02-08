#include <iostream>
using namespace std;

int A[5][5], directie;

void tiparire()
{
    for (int i = 1;i <= 4;i++)
    {
        cout << endl;
        for (int j = 1;j <= 4;j++)
            cout << A[i][j] << " ";
    }
    cout << endl;
}

void citire()
{
    for (int i = 1;i <= 4;i++)
        for (int j = 1;j <= 4;j++)
            cin >> A[i][j];
    cin >> directie;
}

void mutare_stanga()
{
    for (int i = 1;i <= 4;i++)
        for (int j = 1;j <= 3;j++)
        {
            int pozitie = j + 1;
            while (A[i][pozitie] == 0)
                pozitie++;
            if (pozitie > 4)
                break;
            if (A[i][j] == A[i][pozitie])
            {
                A[i][j] += A[i][pozitie];
                A[i][pozitie] = 0;
            }
            if (A[i][j] == 0)
            {
                if (A[i][pozitie] != 0)
                {
                    if (A[i][pozitie] == A[i][pozitie + 1])
                    {
                        A[i][j] = A[i][pozitie] + A[i][pozitie + 1];
                        A[i][pozitie] = A[i][pozitie + 1] = 0;
                    }
                    else
                    {
                        A[i][j] = A[i][pozitie];
                        A[i][pozitie] = 0;
                    }
                }
            }
            else if(A[i][j+1]==0)
            {
                A[i][j + 1] = A[i][pozitie];
                A[i][pozitie] = 0;
            }
        }
}

void mutare_sus()
{
    for (int j = 1;j <= 4;j++)
        for (int i = 1;i <= 3;i++)
        {
            int pozitie = i + 1;
            while (A[pozitie][j] == 0)
                pozitie++;
            if (pozitie > 4)
                break;
            if (A[i][j] == A[pozitie][j])
            {
                A[i][j] += A[pozitie][j];
                A[pozitie][j] = 0;
            }
            if (A[i][j] == 0)
            {
                if (A[pozitie][j] != 0)
                {
                    if (A[pozitie][j] == A[pozitie + 1][j])
                    {
                        A[i][j] = A[pozitie][j] + A[pozitie+1][j];
                        A[pozitie][j] = A[pozitie+1][j] = 0;
                    }
                    else
                    {
                        A[i][j] = A[pozitie][j];
                        A[pozitie][j] = 0;
                    }
                }
            }
            else if (A[i+1][j] == 0)
            {
                A[i + 1][j] = A[pozitie][j];
                A[pozitie][j] = 0;
            }
        }
}

void mutare_dreapta()
{
    for (int i = 1;i <= 4;i++)
        for (int j = 4;j >= 2;j--)
        {
            int pozitie = j - 1;
            while (A[i][pozitie] == 0)
                pozitie--;
            if (pozitie < 1)
                break;
            if (A[i][j] == A[i][pozitie])
            {
                A[i][j] += A[i][pozitie];
                A[i][pozitie] = 0;
            }
            if (A[i][j] == 0)
            {
                if (A[i][pozitie] != 0)
                {
                    if (A[i][pozitie] == A[i][pozitie - 1])
                    {
                        A[i][j] = A[i][pozitie] + A[i][pozitie - 1];
                        A[i][pozitie] = A[i][pozitie - 1] = 0;
                    }
                    else
                    {
                        A[i][j] = A[i][pozitie];
                        A[i][pozitie] = 0;
                    }
                }
            }
            else if (A[i][j - 1] == 0)
            {
                A[i][j - 1] = A[i][pozitie];
                A[i][pozitie] = 0;
            }
        }
}

void mutare_jos()
{
    for (int j = 1;j <= 4;j++)
        for (int i = 4;i >= 2;i--)
        {
            int pozitie = i - 1;
            while (A[pozitie][j] == 0)
                pozitie--;
            if (pozitie < 1)
                break;
            if (A[i][j] == A[pozitie][j])
            {
                A[i][j] += A[pozitie][j];
                A[pozitie][j] = 0;
            }
            if (A[i][j] == 0)
            {
                if (A[pozitie][j] != 0)
                {
                    if (A[pozitie][j] == A[pozitie - 1][j])
                    {
                        A[i][j] = A[pozitie][j] + A[pozitie - 1][j];
                        A[pozitie][j] = A[pozitie - 1][j] = 0;
                    }
                    else
                    {
                        A[i][j] = A[pozitie][j];
                        A[pozitie][j] = 0;
                    }
                }
            }
            else if (A[i - 1][j] == 0)
            {
                A[i - 1][j] = A[pozitie][j];
                A[pozitie][j] = 0;
            }
        }
}

void rezolvare()
{
    if(directie == 0) //stanga
        mutare_stanga();
    else if(directie == 1) //sus
        mutare_sus();
    else if(directie == 2) //dreapta
        mutare_dreapta();
    else if(directie == 3) //jos
        mutare_jos();
}

int main()
{
    citire();
    rezolvare();
    tiparire();
    return 0;
}