class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX;
        int max_value=0;
        for(int i=0;i<prices.size();i++)
        {
            low=min(low,prices[i]);
            max_value=max(max_value,prices[i]-low);
        }
        return max_value;
    }
};