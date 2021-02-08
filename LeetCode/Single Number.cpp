class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> hash;
        
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(nums[i]) !=hash.end())
            {
                hash[nums[i]]++;
            }
            else
            {
                hash[nums[i]]=1;
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(nums[i])->second == 1)
            {
                return nums[i];
            }
        }
        
        return -1;
    }
};