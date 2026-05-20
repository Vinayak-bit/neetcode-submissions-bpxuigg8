class Solution {
public:
    bool subsetsum(vector<int>&nums,int sum){
        vector<vector<bool>>arr(nums.size()+1,vector<bool>(sum+1));
        for(int i=0;i<nums.size()+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j==0)arr[i][j]=true;
                else if(i==0)arr[i][j]=false;
            }
        }
        for(int i=1;i<nums.size()+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j){
                    arr[i][j]=arr[i-1][j] || arr[i-1][j-nums[i-1]];
                }
                else{
                    arr[i][j]=arr[i-1][j];
                }
            }
        }
        return arr[nums.size()][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2==1)return false;
        else return subsetsum(nums,sum/2);
        
    }
};
