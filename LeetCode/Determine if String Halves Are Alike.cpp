class Solution {
public:
    string s_vowels={"AEIOU"};
    
    bool halvesAreAlike(string s) {
        
        return (count(s,0,s.length()/2)==count(s,s.length()/2,s.length()));
        
    }
    
    int count(string s,int start,int finish)
    {
        int i_vowels=0;
        
        for(int i=start;i<finish;i++)
        {
            for(int j=0;j<s_vowels.length();j++)
            {
                if(toupper(s[i])==s_vowels[j])
                {
                    i_vowels++;
                    break;
                }
            }
        }
        
        return i_vowels;
    }
};