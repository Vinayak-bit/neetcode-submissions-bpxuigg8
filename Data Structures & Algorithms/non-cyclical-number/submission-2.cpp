class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>se;
        do{
            se.insert(n);
            int sum=0;
            int temp=n;
            while(temp){
                int temp2=temp%10;
                sum+=(temp2*temp2);
                temp/=10;
            }
            n=sum;
        }while(se.find(n)==se.end());
        if(n==1)return true;
        else return false;
    }
};
