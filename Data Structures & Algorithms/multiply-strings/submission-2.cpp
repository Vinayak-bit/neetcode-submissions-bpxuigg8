class Solution {
public:
    string multiply(string num1, string num2) {
        long long pl=1;
        long long n1=0;
        long long i=num1.size()-1;
        while(i>=0){
            long long di=num1[i]-'0';
            n1+=(di*pl);
            pl*=10;
            i--;
        }
        long long pl2=1;
        long long n2=0;
        long long i2=num2.size()-1;
        while(i2>=0){
            long long di=num2[i2]-'0';
            n2+=(di*pl2);
            pl2*=10;
            i2--;
        }
        long long ans=n1*n2;
        string s;
        if(ans==0)s="0";
        while(ans){
            long long di=ans%10;
            s+=('0'+di);
            ans/=10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
