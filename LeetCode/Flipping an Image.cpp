class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        for(int i=0;i<A.size();i++)
        {
            int right=A[i].size()-1;
            for(int j=0;j<A[i].size()/2;j++)
            {
                swap(A[i][j],A[i][right--]);
            }
        }
        
        for(int i=0;i<A.size();i++)
            for(int j=0;j<A[i].size();j++)
                if(A[i][j]==0)
                    A[i][j]=1;
                else
                    A[i][j]=0;
        
        return A;
    }
};