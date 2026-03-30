class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
    }
    void dfs(int i,int j,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m)return;
        if(grid[i][j]!='1')return;
        grid[i][j]='2';
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);

    }
};
