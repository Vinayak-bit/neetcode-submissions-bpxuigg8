class Solution {
public:
    int dp(vector<vector<int>>&vec,vector<vector<int>>&vec2,int m,int n){
            if(vec2[m][n]==1)return vec[m][n]=0;
            else if(m==0&&n==0){
                return vec[m][n]=1;
            }
            if(vec[m][n]!=-1)return vec[m][n];
            else if(m==0){
                return vec[m][n]=dp(vec,vec2,m,n-1);
            }else if(n==0){
                return vec[m][n]=dp(vec,vec2,m-1,n);
            }else{
                return vec[m][n]=dp(vec,vec2,m-1,n)+dp(vec,vec2,m,n-1);
            }
        }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>vec(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
        return dp(vec,obstacleGrid,obstacleGrid.size()-1,obstacleGrid[0].size()-1);
    }
};