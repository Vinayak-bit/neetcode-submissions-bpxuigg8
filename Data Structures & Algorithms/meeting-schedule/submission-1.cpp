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
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto& a,auto& b){
            return a.end<b.end;
        });
        int cou=0;
        int f=intervals[0].end;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i].start>=f){
                f=intervals[i].end;
            }else{
                return false;
            }
        }
        return true;
    }
};
