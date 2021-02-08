#include <iostream>
#include <map>
#include <string>
#include <vector>

void read(int n, std::vector<std::string> &list)
{
	for (int i = 0;i < n;i++)
	{
		std::string temp;
		std::cin >> temp;
		list.push_back(temp);
	}
}

void count(std::vector<std::string> tlist, std::map<std::string, int> &M)
{
	for (int i = 0; i<tlist.size(); i++) 
	{
		if (M.find(tlist[i]) == M.end()) 
		{
			M[tlist[i]] = 1;
		}
		else 
		{
			M[tlist[i]]++;
		}
	}
}

template <typename T>
int solution(std::map<std::string, T> M1, std::map<std::string, T> M2)
{
	int max_sum = 0;
	typename std::map<std::string, T>::const_iterator i=M1.begin(), j=M2.begin();

	while (i != M1.end() && j != M2.end())
	{
		if (i->first == j->first)
		{
			max_sum += std::min(i->second, j->second);
			i++;
			j++;
		}
		else if (i->first > j->first)
		{
			j++;
		}
		else
		{
			i++;
		}
	}

	return max_sum;
}

int main()
{
	std::vector<std::string> v_DOMjudge, v_Kattis;
	std::map<std::string, int> m_DOMjudge, m_Kattis;
	int n;

	std::cin >> n;

	read(n,v_DOMjudge);
	read(n,v_Kattis);

	count(v_DOMjudge, m_DOMjudge);
	count(v_Kattis, m_Kattis);

	std::cout<<solution(m_DOMjudge, m_Kattis)<<std::endl;

	return 0;
}