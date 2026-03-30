class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>vec(ratings.size());
        for(int i=0;i<ratings.size();i++){
            if(i==0)vec[i]=1;
            else if(ratings[i]>ratings[i-1])vec[i]=1+vec[i-1];
            else vec[i]=1;
        }
        for(int i=ratings.size()-1;i>=0;i--){
            if(i==ratings.size()-1)vec[i]=max(1,vec[i]);
            else if(ratings[i]>ratings[i+1])vec[i]=max(vec[i],1+vec[i+1]);
            else vec[i]=max(1,vec[i]);
        }
        int sum=0;
        for(int i:vec)sum+=i;
        return sum;
    }
};