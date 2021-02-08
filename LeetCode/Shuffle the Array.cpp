class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer;
        for(int i=0;i<nums.size()/2;i++)
        {
            answer.push_back(nums[i]);
            answer.push_back(nums[nums.size()/2+i]);
        }
    return answer;
    }
};