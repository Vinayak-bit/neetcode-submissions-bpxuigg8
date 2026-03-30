class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        if(s2.length()>=s1.length()){
        for(int i=0;i<=s2.length()-s1.length();i++){
            string te=s2.substr(i,s1.length());
            if(ana(s1,te))return true;
        }}
        return false;
    }
    bool ana(string s1,string s2){
        if(s1.length()!=s2.length())return false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
};
