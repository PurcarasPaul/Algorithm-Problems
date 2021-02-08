class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        if(nums.size()<1)
        {
            return nums;
        }
        
        if(nums.size()>1)
        {
        
        int i_size = nums.size();
        
        sort(nums.begin(),nums.end());
        
        if(nums[0]==nums[1])
        {
            nums.push_back(nums[0]);
            nums[0]=-1;
        }
        
        for(int i=1;i<i_size-1;i++)
        {
            if(nums[i]==nums[i-1] || nums[i]==nums[i+1])
            {
                nums.push_back(nums[i]);
                nums[i]=-1;
            }
        }
        
        nums.erase(nums.begin(),nums.begin()+i_size);
        
        return nums;
        }
        else
        {
            nums.pop_back();
            return nums;
        }
    }
};