class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp;
        for(int i:nums){
            mp.insert(i);
        }
        int maxc=0;
        for(int i:nums){
            int cur=1;
            if(mp.find(i-1)!=mp.end()){
                int j=i-1;
                cur++;
                while(mp.find(j-1)!=mp.end()){
                    cur++;
                    j--;
                }
            }
            if(mp.find(i+1)!=mp.end()){
                int j=i+1;
                cur++;
                while(mp.find(j+1)!=mp.end()){
                    cur++;
                    j++;
                }
            }
            maxc=max(maxc,cur);

        }
        return maxc;
        
    }
};
