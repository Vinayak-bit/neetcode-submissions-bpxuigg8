/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size()==0)return 0;
        vector<pair<int,int>>ti;
        for(int i=0;i<intervals.size();i++){
            ti.push_back({intervals[i].start,+1});
            ti.push_back({intervals[i].end,-1});
        }
        sort(ti.begin(),ti.end(),[](auto& a,auto& b){
            if(a.first==b.first)return a.second<b.second;
            else return a.first<b.first;
        });
        int co=0;
        int res=0;
        for(int i=0;i<ti.size();i++){
            co+=ti[i].second;
            res=max(res,co);
        }
        return res;
    }
};
