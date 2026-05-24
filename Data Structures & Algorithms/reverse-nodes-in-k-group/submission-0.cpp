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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* start=new ListNode();
        ListNode* temp=head;
        vector<ListNode*>vec;
        while(temp!=NULL){
            vec.push_back(temp);
            temp=temp->next;
        }
        int i=0;
        temp=start;
        while(i+k<=vec.size()){
            for(int j=i+k-1;j>=i;j--){
                temp->next=vec[j];
                temp=temp->next;
            }
            i+=k;
        }
        while(i<vec.size()){
            temp->next=vec[i];
            temp=temp->next;
            i++;
        }
        temp->next=NULL;
        return start->next;

    }
};
