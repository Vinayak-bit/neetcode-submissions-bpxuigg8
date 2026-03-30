class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>vec(n+1);
        vector<int>vec2(n+1);

        for(int i=0;i<trust.size();i++){
            vec[trust[i][0]]++;
            vec2[trust[i][1]]++;
        }
        for(int i=1;i<n+1;i++){
            if(vec2[i]==n-1 && vec[i]==0)return i;
        }
        
        return -1;
    }
};