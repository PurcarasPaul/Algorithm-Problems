class Solution {
public:
    
    bool verify(int pos,vector<int> answer)
    {
        for (int i = 0;i < pos;i++)
	    	if (answer[i] == answer[pos])
	    		return false;
	    return true;
    }
    
    void bkt(int pos,vector<int> answer,vector<vector<int>> &true_answer,vector<int> nums)
    {
	    if (pos == nums.size())
	    		true_answer.push_back(answer);
	    else
	    {
		    for (int i = 0;i < nums.size();i++)
		    {
			    answer[pos]=nums[i];
			    if (verify(pos,answer) == 1)
				    bkt(pos + 1,answer,true_answer,nums);
		    }
	    }
		
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> answer(nums.size());
        vector<vector<int>> true_answer;
        bkt(0,answer,true_answer,nums);
        return true_answer;
    }
};