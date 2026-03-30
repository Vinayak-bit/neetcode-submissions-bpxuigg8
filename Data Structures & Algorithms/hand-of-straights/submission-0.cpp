class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)return false;
        map<int,int>mp;
        for(int i=0;i<hand.size();i++)mp[hand[i]]++;
        sort(hand.begin(),hand.end());
        for(auto it:hand){
            while(mp[it]>0){
                for(int i=it;i<it+groupSize;i++){
                    if(mp[i]==0)return false;
                    mp[i]--;
                }
            }
        }
        return true;
        
    }
};
