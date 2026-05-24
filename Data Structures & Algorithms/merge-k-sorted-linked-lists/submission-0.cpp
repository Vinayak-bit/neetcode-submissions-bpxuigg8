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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* start=new ListNode();
        ListNode* temp=NULL;
        ListNode* temp2=start;
        int mini=-1;
        do{
            temp=NULL;
            int i=0;
            mini=-1;
            while(i<lists.size()){
                if(lists[i] != NULL) {
                    if(temp == NULL || lists[i]->val < temp->val) {
                        mini = i;
                        temp = lists[i];
                        }
                        }
                i++;
            }
            if(mini==-1)break;
            temp2->next=lists[mini];
            temp2=temp2->next;
            lists[mini]=lists[mini]->next;
        }while(true);
        return start->next;
    }
};
