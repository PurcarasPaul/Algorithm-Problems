#include <iostream>
#include <string>
using namespace std;

int numar[999999], nr_cifre, nr_cifre_baza2 = 1, zero = 1,verfic;
string number, numar_baza2, numere_baza2[999999];

struct baza2
{
    int figure[8]{ 0,1,2,3,4,5,6,7 };
    string base2[8]{ "000","001","010","011","100","101","110","111" };
}number_base2;

struct baza16
{
    string figure16[16]{ "0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111" };
    char base16[16]{ '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
}number_base16;

void citire()
{
    cin >> number;
    for (int i = 0;i < number.length();i++)
        numar[++nr_cifre] = number[i] - '0';
}

void base8_to_base2()
{
    for (int i = 1;i <= nr_cifre;i++)
        for (int j = 0;j <= 7;j++)
            if (numar[i] == number_base2.figure[j])
            {
                numar_baza2 += number_base2.base2[j];
                break;
            }
}

void base2_to_base16()
{
    int ct_cifre = 0;
    for (int i = numar_baza2.length() - 1;i >= 0;i--)
        if (ct_cifre <= 3)
        {
            ct_cifre++;
            numere_baza2[nr_cifre_baza2] = numar_baza2[i] + numere_baza2[nr_cifre_baza2];
        }
        else
        {
            ct_cifre = 1;
            nr_cifre_baza2++;
            numere_baza2[nr_cifre_baza2] += numar_baza2[i];
        }
    while (numere_baza2[nr_cifre_baza2].length() != 4)
    {
        string temp = numere_baza2[nr_cifre_baza2];
        numere_baza2[nr_cifre_baza2] = "0" + temp;
    }
}

void extra_leading_zero()
{
    for (int i = nr_cifre_baza2;i >= 1;i--)
        if (numere_baza2[i] == "0000" && zero == 1)
            numere_baza2[i] = "";
        else zero = 0;
}

void tiparire()
{
    extra_leading_zero();
    for (int i = nr_cifre_baza2;i >= 1;i--)
        for (int j = 0;j <= 15;j++)
            if (numere_baza2[i] == number_base16.figure16[j])
            {
                cout << number_base16.base16[j];
                break;
            }
    cout << endl;
}

int main()
{
    citire();
    if (number.length() > 1)
    {
        base8_to_base2();
        base2_to_base16();
        tiparire();
    }
    else
    {
        for (int i = 0;i <= 7;i++)
        {
            if (number[0] - '0' == number_base2.figure[i])
            {
                cout << number_base2.figure[i] << endl;
                verfic = 1;
                break;
            }
        }
        if (verfic == 0)
            cout << 0 << endl;
    }
    return 0;
}