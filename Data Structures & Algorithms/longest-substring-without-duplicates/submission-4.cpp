class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>se;
        int l=0;
        int ans=0;
        int i=0;
        for(i;i<s.length();i++){
            int prev=se.size();
            se.insert(s[i]);
            if(prev==se.size()){
                ans=max(ans,i-l);
                for(l;l<i;l++){
                    se.erase(s[l]);
                    if(s[l]==s[i]){l++;se.insert(s[i]);break;}
                }
            }
        }
        return max(ans,i-l);
    }
};
