class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j){
        if(i<0||j<0||i==grid.size()||j==grid[0].size()||grid[i][j]!='O')return;
        grid[i][j]='S'; 
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            dfs(board,i,0);
            dfs(board,i,m-1);
        }
        for(int j=0;j<m;j++){
            dfs(board,0,j);
            dfs(board,n-1,j);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O')board[i][j]='X';
                else if(board[i][j]=='S')board[i][j]='O';
            }
        }
    }
};
