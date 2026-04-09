class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)dfs(i,j,0,grid);
            }
        }
        return;
    }
    void dfs(int i,int j,int dist,vector<vector<int>>&grid){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()||grid[i][j]==-1)return;
        if(grid[i][j]<dist)return;
        grid[i][j]=dist;
        dfs(i+1,j,dist+1,grid);
        dfs(i-1,j,dist+1,grid);
        dfs(i,j+1,dist+1,grid);
        dfs(i,j-1,dist+1,grid);
        return;
    }
};
