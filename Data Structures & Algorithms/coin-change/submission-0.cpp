class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>arr(coins.size()+1,vector<int>(amount+1));
        for(int i=0;i<coins.size()+1;i++){
            arr[i][0]=0;
        }
        for(int i=1;i<amount+1;i++){
            arr[0][i]=INT_MAX-1;
        }
        for(int i=1;i<coins.size()+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    arr[i][j]=min(arr[i][j-coins[i-1]]+1,arr[i-1][j]);
                }else{
                    arr[i][j]=arr[i-1][j];
                }
            }
        }
        if(arr[coins.size()][amount]==INT_MAX-1)return -1;
        else return arr[coins.size()][amount];
        
    }
};
