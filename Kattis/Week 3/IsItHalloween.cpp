#include <iostream>
#include <string>
using namespace std;

string date;

void all()
{
	getline(cin,date);
	if (date == "OCT 31" || date == "DEC 25")
		cout << "yup" << endl;
	else cout << "nope" << endl;
}

int main()
{
	all();
	return 0;
}