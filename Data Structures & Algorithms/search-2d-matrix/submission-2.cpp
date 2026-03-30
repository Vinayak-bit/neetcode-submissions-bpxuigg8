class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int l=0;
        int r=n*m -1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int m1=mid/n;
            int n1=mid%n;
            if(matrix[m1][n1]>target)r=mid-1;
            else if(matrix[m1][n1]<target)l=mid+1;
            else return true;
        }
        return false;
    }
};
