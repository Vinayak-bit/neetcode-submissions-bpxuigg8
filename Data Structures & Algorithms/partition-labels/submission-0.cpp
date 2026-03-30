class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        } 
        vector<int>ans;
        int siz=0;
        map<char,int>temp;
        for(int i=0;i<s.length();i++){
            temp[s[i]]=i;
            siz++;
            for(auto j:temp){
                if(mp[j.first]!=temp[j.first])goto ti;
            }
            ans.push_back(siz);
            siz=0;
            temp.clear();
            ti:
        }
        return ans;
    }
};
