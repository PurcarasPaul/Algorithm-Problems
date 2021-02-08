class Solution {
public:
int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse_letters{ ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

    for (int i = 0;i < words.size();i++)
    {
        string word = words[i], temp_string = "";
        for (int j = 0;j < word.length();j++)
        {
            temp_string += morse_letters[(int)word[j] - 97];
        }
        words[i] = temp_string;
    }

    sort(words.begin(), words.begin() + words.size());
    return distance(words.begin(), unique(words.begin(), words.begin() + words.size()));
}
};