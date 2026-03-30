class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int arr[2]={0};
        for(int i=0 ;i<bills.size();i++){
            if(bills[i]==5){
                arr[0]++;
            }else if(bills[i]==10){
                arr[0]--;
                arr[1]++;
                if(arr[0]<0){
                    return false;
                }
            }else{
                if(arr[1]>0){
                arr[0]--;
                arr[1]--;
                if(arr[0]<0||arr[1]<0){
                    return false;
                }}else{
                    arr[0]-=3;
                    if(arr[0]<0){
                        return false;
                }
                }
            }
        }
        return true;
    }
};