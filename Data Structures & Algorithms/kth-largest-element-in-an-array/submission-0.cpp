class Solution {
public:

    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>vec;
        for(int i:nums){
            vec.push(i);
            if(vec.size()>k)vec.pop();
        }
        return vec.top();
    }
};
