class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        for(int i=0;i<candies.size();i++)
        {
            bool greatest=true;
            for(int j=0;j<candies.size();j++)
            {
                if(candies[i]+extraCandies<candies[j])
                greatest=false;
            }
            if(greatest==true)
                answer.push_back(true);
            else
                answer.push_back(false);
        }
        return answer;
    }
};