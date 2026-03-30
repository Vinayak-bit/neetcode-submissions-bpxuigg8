class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,maxin=0,curtot=0;
        for(int i=0;i<gas.size();i++){
                curtot+=(gas[i]-cost[i]);
                sum+=(gas[i]-cost[i]);
                if(curtot<0){
                    curtot=0;
                    maxin=i+1;
                }
        }
        if(sum<0)return -1;
        else return maxin;
    }
};
