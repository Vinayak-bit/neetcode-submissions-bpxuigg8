class Solution {
public:
    string predictPartyVictory(string senate) {
        int cor=0,cod=0,res=0;
        for(char c:senate){
            if(c=='R')cor++;
            else cod++;
        }
        int i=0;
        while(cor!=0 && cod!=0){
            if(res==0){
                if(senate[i]=='R'){
                    res++;
                    cod--;
                }
                else{
                    res--;
                    cor--;
                }
                i=(i+1)%senate.size();
            }
            else if(res>0){
                if(senate[i]=='R'){
                    res++;
                    cod--;
                }
                else{
                    res--;
                }
                i=(i+1)%senate.size();
            }
            else{
                if(senate[i]=='R'){
                    res++;
                }
                else{
                    res--;
                    cor--;
                }
                i=(i+1)%senate.size();
            }
        }
        if(cor==0)return "Dire";
        else return "Radiant";
    }
};