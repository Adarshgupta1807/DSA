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
        if (head==NULL || left == right) {
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* beforeLeft = dummy;
        for(int i = 0; i < left-1; i++){
            beforeLeft = beforeLeft->next;
        }
        ListNode *prev=NULL;
        ListNode *curr=beforeLeft->next;
        ListNode *next=NULL;
        for(int i=left;i<=right;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        beforeLeft->next->next = curr;
        beforeLeft->next=prev;
        return dummy->next;
    }
};