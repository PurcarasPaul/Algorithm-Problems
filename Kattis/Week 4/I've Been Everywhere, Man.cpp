#include <iostream>
#include <vector>
using namespace std;

int cases, trips,total_cities;
vector<string> cities;

bool new_trip(string new_city)
{
    for (int i = 0;i < cities.size();i++)
        if (new_city == cities[i])
            return false;
    return true;
}

int main()
{
    cin >> cases;
    for (int i = 0;i < cases;i++)
    {
        total_cities = 0;
        cin >> trips;
        for (int i = 0;i < trips;i++)
        {
            string new_city;
            cin >> new_city;
            if (new_trip(new_city) == true)
                total_cities++;
            cities.push_back(new_city);
        }
        cout << total_cities << endl;
    }
    return 0;
}