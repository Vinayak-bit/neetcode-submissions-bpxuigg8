class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,store=0,maxl=height[l],maxr=height[r];
        while(r>l){
            if(maxl>maxr){
                r--;
                maxr=max(height[r],maxr);
                store+=maxr-height[r];
            }
            else{
                l++;
                maxl=max(height[l],maxl);
                store+=maxl-height[l];
            }
            
        }
        return store;
    }
};
