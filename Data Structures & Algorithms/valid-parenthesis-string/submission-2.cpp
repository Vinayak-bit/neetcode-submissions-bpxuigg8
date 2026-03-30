class Solution {
public:
    bool checkValidString(string s) {
        int lmi=0,lma=0;
        for(char c:s){
            if(c=='('){
                lmi++;lma++;
            }
            else if(c==')'){
                lmi--;lma--;
            }
            else{
                lmi--;lma++;
            }
            if(lma<0)return false;
            if(lmi<0)lmi=0;
        }
        return lmi==0;

    }
};
