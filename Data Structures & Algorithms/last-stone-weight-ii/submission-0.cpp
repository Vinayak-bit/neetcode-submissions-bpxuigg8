class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        int n=stones.size();
        for(int i=0;i<n;i++){
            sum+=stones[i];
        }
        vector<vector<bool>>arr(n+1,vector<bool>(sum+1));
        for(int i=0;i<n+1;i++){
            arr[i][0]=true;
        }
        for(int j=1;j<sum+1;j++){
            arr[0][j]=false;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(stones[i-1]<=j){
                    arr[i][j]=arr[i-1][j]||arr[i-1][j-stones[i-1]];
                }else{
                    arr[i][j]=arr[i-1][j];
                }
            }
        }
        int m=-1;
        for(int i=0;i<=sum/2;i++){
            if(arr[n][i]==true){
                m=i;
            }
        }
        return sum-2*m;
    }
};