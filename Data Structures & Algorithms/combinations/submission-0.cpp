class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        back(n,k,1,temp,ans);
        return ans;
    }
    void back(int n,int k,int i,vector<int>curvec,vector<vector<int>>&ans){
        if(curvec.size()==k || i==n+1){
            if(curvec.size()==k)ans.push_back(curvec);
            return;
        }
        back(n,k,i+1,curvec,ans);
        curvec.push_back(i);
        back(n,k,i+1,curvec,ans);
    }
};