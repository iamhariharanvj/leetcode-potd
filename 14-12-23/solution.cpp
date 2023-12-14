class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int> onesRow(m,0);
        vector<int> onesCol(n,0);

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]==1){
                    onesRow[i]++;
                    onesCol[j]++;
                }
    
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                grid[i][j] = 2*(onesRow[i]+onesCol[j]) - (m+n);
            
        return grid;
    }
};