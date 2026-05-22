class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>vec(grid.size(),vector<int>(grid[0].size(),0));
        for(int m=0;m<grid.size();m++){
            for(int n=0;n<grid[0].size();n++){
                if(m==0&&n==0)vec[m][n]=grid[m][n];
                else if(m==0)vec[m][n]=vec[m][n-1]+grid[m][n];
                else if(n==0)vec[m][n]=vec[m-1][n]+grid[m][n];
                else vec[m][n]=min(vec[m-1][n],vec[m][n-1])+grid[m][n];
                }
        }
        return vec[grid.size()-1][grid[0].size()-1];
    }
};