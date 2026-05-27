class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int fe=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)fe++;
                else if(grid[i][j]==2)q.push({i,j});
            }
        }
        vector<pair<int,int>>dir={{0,1},{1,0},{-1,0},{0,-1}};
        int time=0;
        while(!q.empty()&&fe>0){
            int n=q.size();
            while(n--){
                auto d=q.front();
                q.pop();
                for(auto cd:dir){
                    int i=d.first+cd.first;
                    int j=d.second+cd.second;
                    if(i<0 || j<0 || i==grid.size()
                    ||j==grid[0].size()||grid[i][j]!=1)continue;
                    grid[i][j]=2;
                    q.push({i,j});
                    fe--;
                }
            }
            time++;
        }
        if(fe==0)return time;
        else return -1;
    }
};
