class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string com;
        com=strs[0];
        for(int i=1;i<strs.size();i++){
            bool t=true;
            while(t){
            string temp=strs[i].substr(0,com.size());
            if(temp!=com){
                com.pop_back();
            }
            else{
                t=false;
                continue;
            }
            }
        }
        return com;
    }
};