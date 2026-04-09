class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                area=max(area,dfs(i,j,grid));
            }
        }
        return area;
    }
    int dfs(int i,int j,vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0)return 0;
        grid[i][j]=0;
        int area=1;
        area+=dfs(i,j+1,grid);
        area+=dfs(i,j-1,grid);
        area+=dfs(i+1,j,grid);
        area+=dfs(i-1,j,grid);
        return area;
    }
    
};
