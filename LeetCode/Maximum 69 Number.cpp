class Solution {
public:
    int maximum69Number (int num) {
        string answer=to_string(num);
        for(int i=0;i<answer.length();i++)
            if(answer[i]=='6')
            {
                answer[i]='9';
                break;
            }
        
        return stoi(answer);
    }
};