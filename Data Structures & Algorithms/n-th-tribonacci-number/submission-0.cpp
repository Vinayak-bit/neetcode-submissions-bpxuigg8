class Solution {
public:
    int dp(int n){
        if(n==0) return 0;
        else if(n==1)return 1;
        else if(n==2)return 1;
        else return dp(n-1)+dp(n-2)+dp(n-3);
    }
    int tribonacci(int n) {
        return dp(n);
    }
};