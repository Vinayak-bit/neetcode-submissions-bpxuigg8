class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string s:strs){
            ans+=to_string(s.size());
            ans+='#';
            ans+=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string temps="";
        int l=0;
        int temp=0;
        while(l<s.size()){
            if(s[l]=='#'){
                l++;
                temp=stoi(temps);
                temps="";
                for(int i=l;i<l+temp;i++){
                    temps+=s[i];
                }
                ans.push_back(temps);
                temps="";
                l+=temp;
            }
            else{
                temps+=s[l];
                l++;
            }
        }
        return ans;
    }
};
