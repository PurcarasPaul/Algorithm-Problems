class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> number_check;
        int ct,answer;
        if(nums.size()==1)
            return nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(verify_list(nums[i],number_check)==1)
            {    
                ct=1;
                for(int j=i+1;j<nums.size();j++)
                    if(nums[i]==nums[j])
                        ct++;
                if(ct>nums.size()/2)
                {
                   answer=nums[i];
                   break;
                }
                number_check.push_back(nums[i]);
            }
        }
        return answer;
    }
    
    bool verify_list(int number,vector<int> number_check)
    {
        for(int i=0;i<number_check.size();i++)
            if(number==number_check[i])
                return false;
        return true;
    }
};