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
        ListNode *dummy= new ListNode(0,nullptr);
        ListNode *p1=l1;
        ListNode *p2=l2;
        int carry=0;
        ListNode *curr=dummy;
        while(p1!=NULL || p2!=NULL || carry!=0){
            int val1;
            if (p1 != NULL) {
                val1 = p1->val;
            } else {
                val1 = 0;
            }
            int val2;
            if (p2 != NULL) {
                val2 = p2->val;
            } else {
                val2 = 0;
            }
            int sum=val1+val2+carry;
            int digit=sum%10;
            carry=sum/10;
            curr->next = new ListNode(digit);
            curr = curr->next;
            if(p1!=NULL) p1=p1->next;
            if(p2!=NULL) p2=p2->next;
        }
        return dummy->next;
    }
};