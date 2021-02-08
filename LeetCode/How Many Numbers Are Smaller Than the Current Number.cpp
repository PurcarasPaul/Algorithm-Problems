class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++)
        {
            int smaller_numbers=0;
            for(int j=0;j<nums.size();j++)
                if(nums[i]>nums[j])
                    smaller_numbers++;
            answer.push_back(smaller_numbers);
        }
        return answer;
    }
};