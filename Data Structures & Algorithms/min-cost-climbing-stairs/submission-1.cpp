class Solution {
public:
    void dp(vector<int>&cost,int i){
        if(i<2)return;
        else if(i==2){
            int c1=cost[i-2];
            int c2=cost[i-1];
            cost[i]+=(min(c1,c2));
            return;
        }
        dp(cost,i-1);
        int c1=cost[i-2];
        int c2=cost[i-1];
        cost[i]+=(min(c1,c2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        dp(cost,cost.size()-1);
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};
