class Solution {
    queue<int> temp_line,temp_colon;
public:
    void rotten(vector<vector<int>>& grid, int i, int j, int& fresh_oranges)
    {
        if (i>0&&grid[i - 1][j] == 1)
        {
            grid[i - 1][j] = 2;
            fresh_oranges--;
            temp_line.push(i - 1);
            temp_colon.push(j);
        }
        if (j+1<grid[i].size()&&grid[i][j + 1] == 1)
        {
            grid[i][j + 1] = 2;
            fresh_oranges--;
            temp_line.push(i);
            temp_colon.push(j + 1);
        }
        if (i+1<grid.size()&&grid[i + 1][j] == 1)
        {
            grid[i + 1][j] = 2;
            fresh_oranges--;
            temp_line.push(i + 1);
            temp_colon.push(j);
        }
        if (j>0&&grid[i][j - 1] == 1)
        {
            grid[i][j - 1] = 2;
            fresh_oranges--;
            temp_line.push(i);
            temp_colon.push(j - 1);
        }
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes=0, fresh_oranges=0;
        queue<int> line, colon;
        //Count fresh oranges
        for (int i = 0;i < grid.size();i++)
        {
            for (int j = 0;j < grid[i].size();j++)
            {
                if (grid[i][j] == 1)
                    fresh_oranges++;
                if (grid[i][j] == 2)
                {
                    line.push(i);
                    colon.push(j);
                }
            }
        }
        
        if (fresh_oranges == 0)
            return 0;
        else
        {
            while (fresh_oranges)
            {
                int temp_orange = fresh_oranges;
                while (!line.empty() && !colon.empty())
                {
                    rotten(grid, line.front(), colon.front(), fresh_oranges);
                    line.pop();
                    colon.pop();
                }
                minutes++;
                line = temp_line;
                colon = temp_colon;
                temp_line = queue<int>();
                temp_colon = queue<int>();
                if (fresh_oranges == temp_orange)
                    break;
            }
        }
        
        if (fresh_oranges)
            return -1;
        else
            return minutes;
    }
};