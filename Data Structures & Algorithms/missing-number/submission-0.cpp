class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arrsum=0;
        for(int i:nums)arrsum+=i;
        int sum=((nums.size()+1)*(nums.size()))/2;
        return sum-arrsum;
    }
};
