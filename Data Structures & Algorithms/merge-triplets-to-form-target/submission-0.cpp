class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool fi=false,se=false,th=false;
        for(auto it:triplets){
            if(it[0]==target[0]){
                if(it[1]<=target[1] && it[2]<=target[2]){
                    fi=true;
                }
            }
        }
        for(auto it:triplets){
            if(it[1]==target[1]){
                if(it[0]<=target[0] && it[2]<=target[2]){
                    se=true;
                }
            }
        }
        for(auto it:triplets){
            if(it[2]==target[2]){
                if(it[1]<=target[1] && it[0]<=target[0]){
                    th=true;
                }
            }
        }
        if(fi&&se&&th)return true;
        else return false;
    }
};
