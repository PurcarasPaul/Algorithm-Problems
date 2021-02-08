class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> sum;
        int temp_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            temp_sum+=nums[i];
            sum.push_back(temp_sum);
        }
        return sum;
    }
};