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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        ListNode* temp2=l2;
        int sum=l1->val+l2->val;
        ListNode* start=new ListNode(sum%10);
        ListNode* temp3=start;
        temp=temp->next;
        temp2=temp2->next;
        sum/=10;
        while(temp!=NULL && temp2!=NULL){
            sum=temp->val+temp2->val+sum;
            temp3->next=new ListNode(sum%10);
            sum/=10;
            temp3=temp3->next;
            temp=temp->next;
            temp2=temp2->next;
        }
        if(temp!=NULL){
            while(temp!=NULL){
            sum=temp->val+sum;
            temp3->next=new ListNode(sum%10);
            sum/=10;
            temp3=temp3->next;
            temp=temp->next;}
        }else if(temp2!=NULL){
            while(temp2!=NULL){
            sum=temp2->val+sum;
            temp3->next=new ListNode(sum%10);
            sum/=10;
            temp3=temp3->next;
            temp2=temp2->next;}
        }
        if(sum>0){
            temp3->next=new ListNode(sum);
        }
        return start;
    }
};
