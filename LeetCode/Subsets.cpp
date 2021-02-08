class Solution {
public:
    bool verify(int pos,vector<int> temp_vector)
    {
        if(pos==0||temp_vector[pos]>temp_vector[pos-1])
            return true;
        else return false;
    }
    
    void bkt(int pos, int max_pos, vector<vector<int>>& powerset, vector<int> nums,vector<int> temp_vector)
    {
        if (pos == max_pos)
            powerset.push_back(temp_vector);
        else
        {
            for (int i = 0;i < nums.size();i++)
            {
                temp_vector[pos] = nums[i];
                if (verify(pos, temp_vector) == 1)
                    bkt(pos + 1, max_pos, powerset, nums,temp_vector);
            }
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp_vector(nums.size());
        vector<vector<int>> power_set;
        for(int max_pos =0;max_pos<=nums.size();max_pos++)
        {
            vector<int> temp_vector(max_pos);
            bkt(0, max_pos, power_set, nums,temp_vector);
        }
        return power_set;
    }
};