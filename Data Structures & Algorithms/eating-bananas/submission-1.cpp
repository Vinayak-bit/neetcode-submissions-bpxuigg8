class Solution {
public:
    bool mono(vector<int>pi,int h,int k){
        int sum=0;
        for(int i:pi){
            int temp=(i+k-1)/k;
            sum+=temp;
        }
        if(sum<=h)return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=1e9;
        int res=0;
        sort(piles.begin(),piles.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(mono(piles,h,mid)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};
