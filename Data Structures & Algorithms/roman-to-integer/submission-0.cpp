class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                if(i<n-1 && s[i+1]=='V'){ans+=4;i++;}
                else if(i<n-1 && s[i+1]=='X'){ans+=9;i++;}
                else{ans+=mp[s[i]];}
            }
            else if(s[i]=='V')ans+=mp[s[i]];
            else if(s[i]=='X'){
                if(i<n-1 && s[i+1]=='L'){ans+=40;i++;}
                else if(i<n-1 && s[i+1]=='C'){ans+=90;i++;}
                else{ans+=mp[s[i]];}
            }
            else if(s[i]=='L')ans+=mp[s[i]];
            else if(s[i]=='C'){
                if(i<n-1 && s[i+1]=='D'){ans+=400;i++;}
                else if(i<n-1 && s[i+1]=='M'){ans+=900;i++;}
                else{ans+=mp[s[i]];}
            }
            else if(s[i]=='D')ans+=mp[s[i]];
            else{
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};