class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int count=1;
        int ind=0;
        int dis=nums[0];
        int i=1;
        int temp=0;
        while(i<nums.size()){
            if(dis>=nums.size()-1)return count;
            count++;
            int temp=ind;
            while(i<nums.size() && i<=dis){
                if(i+nums[i]>temp+nums[temp]){
                    temp=i;
                }
                i++;
            }
            ind=temp;
            dis=ind+nums[ind];
        }
        return count;
    }
}
;
