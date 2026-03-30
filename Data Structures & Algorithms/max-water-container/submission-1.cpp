class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int con=0;
        while(l<r){
            
            con=max(con,min(heights[l],heights[r])*(r-l));
            (heights[l]>=heights[r])?r--:l++;
        }
        return con;
    }
};
