class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s;
        while(n){
            int i=n%2;
            if(i==0)s+='0';
            else s+='1';
            n/=2;
        }
        uint32_t n2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                n2+=(1<<31-i);
            }
        }
        return n2;
    }
};
