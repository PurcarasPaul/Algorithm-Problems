class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long int sum=0,max_sum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]>nums[i])
                sum+=nums[i];
            else 
                sum=nums[i];
            if(sum>max_sum)
                max_sum=sum;
        }
            return max_sum;
    }
};