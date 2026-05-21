class Solution {
public:
    int dp(vector<vector<int>>&vec,int m,int n){
        if(m==0&&n==0){
            return vec[m][n]=1;
        }
        if(vec[m][n]!=-1)return vec[m][n];
        else if(m==0){
            return vec[m][n]=dp(vec,m,n-1);
        }else if(n==0){
            return vec[m][n]=dp(vec,m-1,n);
        }else{
            return vec[m][n]=dp(vec,m-1,n)+dp(vec,m,n-1);
        }
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>vec(m,vector<int>(n,-1));
        return dp(vec,m-1,n-1);
    }
};
