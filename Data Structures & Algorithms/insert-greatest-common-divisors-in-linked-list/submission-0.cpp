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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur=head;
        while(cur->next!=nullptr){
            int a=cur->val;
            int b=cur->next->val;
            int g=gcd(a,b);
            ListNode* newno=new ListNode(g);
            newno->next=cur->next;
            cur->next=newno;
            cur=newno->next;
        }
        return head;
    }
};