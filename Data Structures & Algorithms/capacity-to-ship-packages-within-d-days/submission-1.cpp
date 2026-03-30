class Solution {
public:
    bool mono(vector<int>pi,int h,int k){
        int days=0;
        int temp=0;
        for(int i:pi){
            if(i>k)return false;
            temp+=i;
            if(temp>k){
                days++;
                temp=i;
            }
        }
        days++;
        return days<=h;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=1;
        int r=500*50000;
        int res=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(mono(weights,days,mid)){
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