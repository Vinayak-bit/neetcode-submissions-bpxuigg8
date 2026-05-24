/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int st=0;
        int tempi=right;
        ListNode* start=new ListNode();
        ListNode* temp2=start;
        while(st<left-1){
            start->next=new ListNode(arr[st]);
            start=start->next;
            st++;
        }
        while(right>=left){
            start->next=new ListNode(arr[right-1]);
            start=start->next;
            right--;
        }
        while(tempi<arr.size()){
            start->next=new ListNode(arr[tempi]);
            start=start->next;
            tempi++;
        }
        return temp2->next;
    }
};