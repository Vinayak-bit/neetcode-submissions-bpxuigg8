class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>>temp;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            temp[t].push_back(s);
        }
        for(pair p:temp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
