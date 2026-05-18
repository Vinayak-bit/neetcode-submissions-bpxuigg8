class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>ind;
        stack<int>hei;
        int n=heights.size();
        int maxar=0;
        for(int i=0;i<n;i++){
            if(ind.empty()||heights[i]>=hei.top()){
                ind.push(i);
                hei.push(heights[i]);
            }
            else{
                int j,h;
                while(!hei.empty()&&heights[i]<hei.top()){
                    j=ind.top();
                    ind.pop();
                    h=hei.top();
                    hei.pop();
                    maxar=max(maxar,h*(i-j));
                }
                ind.push(j);
                hei.push(heights[i]);
            }
        }
        while(!ind.empty()){
            int j=ind.top();
            ind.pop();
            int h=hei.top();
            hei.pop();
            maxar=max(maxar,h*(n-j));
        }
        return maxar;
    }
};
