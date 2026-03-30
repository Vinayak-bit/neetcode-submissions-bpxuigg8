class Solution {
public:
    int getSum(int a, int b) {
     while(b){
        int car=(a&b)<<1;
        a^=b;
        b=car;
    }  
     return a; 
    }
};
