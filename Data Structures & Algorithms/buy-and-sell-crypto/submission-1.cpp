class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,minc=prices[0],temp=0;
        if(prices.size()>=2){
        for(int i=1;i<prices.size();i++){
            if(prices[i]>=minc){
                temp=max(temp,prices[i]-minc);
            }
            else{
                profit=max(profit,temp);
                temp=0;
                minc=prices[i];
            }
        }}
        return max(temp,profit);
        
    }
};
