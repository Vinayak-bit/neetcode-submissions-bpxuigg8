class Solution {
public:
    struct Comp {
        bool operator()(const vector<int>& a, const vector<int>& b) const {
            return (a[0]*a[0] + a[1]*a[1]) <
                   (b[0]*b[0] + b[1]*b[1]);
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>,vector<vector<int>>,Comp>vec;
        for(auto i:points){
            vec.push(i);
            if(vec.size()>k)vec.pop();
        }
        vector<vector<int>> res;
        while (!vec.empty()) {
            res.push_back(vec.top());
            vec.pop();
        }

        return res;
    }
};
