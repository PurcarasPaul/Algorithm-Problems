class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        vector<int> copy_helper;
        for(int i=0;i<numRows;i++)
        {
            vector<int> helper;
            if(i==0)
                helper.push_back(1);
            else
            {
                helper.push_back(1);
                for(int j=1;j<i;j++)
                    helper.push_back(copy_helper[j-1]+copy_helper[j]);
                helper.push_back(1);                    
            }
            copy_helper=helper;
            answer.push_back(helper);
        }
        return answer;
    }
};