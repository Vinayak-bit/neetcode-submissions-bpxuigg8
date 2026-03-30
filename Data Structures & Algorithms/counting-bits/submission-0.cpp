class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        int dec=1;
        for(int i=1;i<=n;i++){
            if(dec*2==i){
                dec=i;
            }
            ans[i]=1+ans[i-dec];
        }
        return ans;
    }
};
