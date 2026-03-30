class Solution {
public:
    unordered_map<int,int>um;
    int dp(int n){
        if(n==0) return um[n]=0;
        else if(n==1)return um[n]=1;
        else if(n==2)return um[n]=1;
        else if(um.count(n)) return um[n];
        else return um[n]=dp(n-1)+dp(n-2)+dp(n-3);
    }
    int tribonacci(int n) {
        return dp(n);
    }
};