class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        if(s[s.size()-1]=='1')return false;
        int cnt=0;
        vector<bool>dp(s.size(),false);
        dp[0]=true;
        for(int i=1;i<s.size();i++){
            if(i>=minJump && dp[i-minJump]){
                cnt++;
            }
            if(i>maxJump && dp[i-maxJump-1]){
                cnt--;
            }
            if(cnt>0 && s[i]=='0'){
                dp[i]=true;
            }
        }
        return dp[s.size()-1];
    }
};