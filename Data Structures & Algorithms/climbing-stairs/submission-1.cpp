class Solution {
public:
    vector<int>vec;
    int dp(int n){
        if(vec[n]!=-1)return vec[n];
        if(n==1) return vec[n]=1;
        else if(n==2) return vec[n]=2;
        return vec[n]=dp(n-1)+dp(n-2);
    }
    int climbStairs(int n) {
        vec.assign(n + 1, -1);
        return dp(n);
    }
};
