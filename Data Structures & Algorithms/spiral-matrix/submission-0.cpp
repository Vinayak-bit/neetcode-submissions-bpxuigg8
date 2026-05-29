class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>vec;
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=0;
        int c=0;
        int r=0;
        int s=m*n;
        while(vec.size()<s){
            while(c<n && vec.size()<s){
                vec.push_back(matrix[r][c]);
                c++;
            }
            c--;
            r++;
            while(r<m && vec.size()<s){
                vec.push_back(matrix[r][c]);
                r++;
            }
            c--;
            r--;
            while(c>=j && vec.size()<s){
                vec.push_back(matrix[r][c]);
                c--;
            }
            r--;
            c++;
            while(r>i && vec.size()<s){
                vec.push_back(matrix[r][c]);
                r--;
            }
            r++;
            c++;
            m--;
            n--;
            i++;
            j++;
        }
        return vec;

        
    }
};
