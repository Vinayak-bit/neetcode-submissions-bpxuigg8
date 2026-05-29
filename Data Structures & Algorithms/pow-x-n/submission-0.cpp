class Solution {
public:
    double myPow(double x, int n) {
        long long po=static_cast<long long>(abs(n));
        double ans=1;
        while(po){
            if(po%2!=0){
                ans*=x;
                po--;
            }
            po/=2;
            x*=x;
        }
        if(n==0)return 1;
        else if(x==0)return 0;
        else if(n>0)return ans;
        else return 1/ans;

    }
};
