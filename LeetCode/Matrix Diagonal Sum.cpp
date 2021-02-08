class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int answer=0;
        for(int i=0;i<mat.size();i++)
        {
            answer+=mat[i][i];
            mat[i][i]=0;
        }
        
        int j=0;
        for(int i=mat.size()-1;i>=0;i--)
            answer+=mat[i][j++];
        
        return answer;
    }
};