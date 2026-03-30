class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        vector<int>vec;
        for(string s:operations){
            if(s=="+"){
                int temp=vec[vec.size()-1]+vec[vec.size()-2];
                sum+=temp;
                vec.push_back(temp);
            }
            else if(s=="D"){
                int t=vec[vec.size()-1];
                sum+=(t*2);
                vec.push_back(t*2);
            }
            else if(s=="C"){
                sum-=vec[vec.size()-1];
                vec.pop_back();
                }
            else {
                int t=stoi(s);
                sum+=t;
                vec.push_back(t);
            }
        }
        return sum;
    }
};