class Solution {
public:
    bool isValid(string s) {
        int out = 0;
        bool answer = false;
        vector<char> brackets;
        if (s.length() == 0)
            return true;
        if (s.length() % 2 == 1)
            return false;
        for (int i = 0;i < s.length();i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                brackets.push_back(s[i]);
            else if (brackets.size() != 0)
            {
                if (brackets[brackets.size() - 1] == '(' && s[i] == ')')
                {
                    answer = true;
                    brackets.pop_back();
                }
                else if (brackets[brackets.size() - 1] == '[' && s[i] == ']')
                {
                    answer = true;
                    brackets.pop_back();
                }
                else if (brackets[brackets.size() - 1] == '{' && s[i] == '}')
                {
                    answer = true;
                    brackets.pop_back();
                }
                else
                {
                    answer = false;
                    break;
                }
            }
        }
        if (answer == true)
            if (brackets.empty())
                return true;
            else return false;
        else return answer;
    }
};