class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    dfs(grid,peri,i,j);
                    return peri;
                }
            }
        }
        
    }
    void dfs(vector<vector<int>>& grid,int &peri,int i,int j){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || j>=m || i>=n)return;
        if(grid[i][j]<1)return;
        grid[i][j]=-1;
        peri+=4;
        if(i+1<n)peri-=(grid[i+1][j]==1 ||grid[i+1][j]==-1)?1:0;
        if(i>0)peri-=(grid[i-1][j]==1||grid[i-1][j]==-1)?1:0;
        if(j+1<m)peri-=(grid[i][j+1]==1||grid[i][j+1]==-1)?1:0;
        if(j>0)peri-=(grid[i][j-1]==1||grid[i][j-1]==-1)?1:0;
        dfs(grid,peri,i+1,j);
        dfs(grid,peri,i-1,j);
        dfs(grid,peri,i,j+1);
        dfs(grid,peri,i,j-1);
    }
};