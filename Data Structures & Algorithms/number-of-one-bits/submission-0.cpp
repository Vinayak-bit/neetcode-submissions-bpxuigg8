class Solution {
public:
    int hammingWeight(uint32_t n) {
        int no=0;
        while(n>0){
            if(n&1==1){
                no++;
            }
            n>>=1;
        }
        return no;
        
    }
};
