class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int car=0;
       for(int i=digits.size()-1;i>=0;i--){
        if(i==digits.size()-1)digits[i]=1+digits[i]+car;
        else digits[i]=digits[i]+car;
        car=digits[i]/10;
        digits[i]%=10;
       } 
       if(car!=0)digits.insert(digits.begin(),car);
       return digits;
    }
};
