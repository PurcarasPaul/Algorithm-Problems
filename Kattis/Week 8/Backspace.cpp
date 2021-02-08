#include <iostream>
#include <string>
#include <vector>

void solution(std::string text, std::vector<char> &answer)
{
	for (int i = 0;i < text.size();i++)
	{
		if (text[i] == '<'&&answer.size()>0)
		{
			answer.pop_back();
		}
		else
		{
			answer.push_back(text[i]);
		}
	}
}

void print(std::vector<char> answer)
{
	for (int i = 0;i < answer.size();i++)
	{
		std::cout << answer[i];
	}

	std::cout << std::endl;
}

int main()
{
	std::string text;
	std::vector<char> answer;

	std::cin >> text;

	solution(text,answer);
	print(answer);

	return 0;
}