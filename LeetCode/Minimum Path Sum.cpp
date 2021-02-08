class Solution {
public:
	void right(vector<vector<int>> &sum, vector<vector<int>> &grid,int value,int l,int c)
	{
		if (c + 1 < grid[0].size())
		{
			if (l == 0 && c == 0)
				sum[l][c + 1] = value + grid[l][c + 1];
			else if (sum[l][c + 1] == 0)
				sum[l][c + 1] = sum[l][c] + grid[l][c + 1];
			else if (sum[l][c + 1] > sum[l][c] + grid[l][c + 1])
				sum[l][c + 1] = sum[l][c] + grid[l][c + 1];
		}
	}

	void down(vector<vector<int>>& sum, vector<vector<int>> &grid, int value, int l, int c)
	{
		if (l + 1 < grid.size())
		{
			if (l == 0 && c == 0)
				sum[l + 1][c] = value + grid[l + 1][c];
			else if (sum[l+1][c] == 0)
				sum[l+1][c] = sum[l][c] + grid[l+1][c];
			else if (sum[l + 1][c] > sum[l][c] + grid[l + 1][c])
				sum[l + 1][c] = sum[l][c] + grid[l + 1][c];
		}
	}


	int minPathSum(vector<vector<int>>& grid) {
		if (grid.size() == 1 && grid[0].size() == 1)
			return grid[0][0];
		else
		{
			vector<vector<int>> sum(grid.size(), vector<int>(grid[0].size(), 0));
			for (int i = 0;i < grid.size();i++)
				for (int j = 0;j < grid[0].size();j++)
				{
					right(sum, grid, grid[i][j], i, j);
					down(sum, grid, grid[i][j], i, j);
				}
			return sum[grid.size() - 1][grid[0].size() - 1];
		}
    }
};