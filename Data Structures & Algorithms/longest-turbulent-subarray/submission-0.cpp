class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int cor=0,wor=0,ans=0;
        if(arr.size()==1){
            return 1;
        }
        else{
            for( int i=0;i<arr.size()-1;i++){
               if(i%2==0){
                if(arr[i]>arr[i+1]){
                    wor=0;
                    cor++;
                    ans=max(ans,cor);
                }
                else if(arr[i]==arr[i+1]){
                   continue;
                }
                else{
                    cor=0;
                    wor++;
                    ans=max(ans,wor);
                }
               }else{
                    if(arr[i]<arr[i+1]){
                    wor=0;
                    cor++;
                    ans=max(ans,cor);
                }
                else if(arr[i]==arr[i+1]){
                   continue;
                }
                else{
                    cor=0;
                    wor++;
                    ans=max(ans,wor);
                }
               } 
            }
        }
        return ans+1;
    }
};