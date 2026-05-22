class Solution {
public:
    int rec(vector<int>&piles,vector<vector<int>>&vec,int s,int e){
        if(s>e)return 0;
        if(vec[s][e]!=-1)return vec[s][e];
        vec[s][e]=max(piles[s]+min(rec(piles,vec,s+2,e),rec(piles,vec,s+1,e-1)),
        piles[e]+min(rec(piles,vec,s+1,e-1),rec(piles,vec,s,e-2)));
        return vec[s][e];

    }
    bool stoneGame(vector<int>& piles) {
        int sum=0;
        vector<vector<int>>vec(piles.size()+1,vector<int>(piles.size()+1,-1));
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
        }
        if(rec(piles,vec,0,piles.size()-1)>sum/2)return true;
        else return false;
    }
};