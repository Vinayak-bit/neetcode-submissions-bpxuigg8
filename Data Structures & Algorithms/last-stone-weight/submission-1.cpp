class Solution {
public:
    priority_queue<int>stones1;
    int lastStoneWeight(vector<int>& stones) {
        for(int i:stones)stones1.push(i);
        return rec(stones1);
    }
    int rec(priority_queue<int>& vec){
        if(vec.size()==0) return 0;
        else if(vec.size()==1) return vec.top();
        int temp=vec.top();
        vec.pop();
        int temp2=vec.top();
        vec.pop();
        if(temp!=temp2)vec.push(abs(temp-temp2));
        return rec(vec);
    }
};
