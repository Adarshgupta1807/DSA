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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int length=1;
        while(temp->next!=NULL){
            length++;
            temp=temp->next;
        }
        k=k%length;
        if(k==0){
            return head;
        }
        ListNode* newtail=head;
        for(int i=0;i<length-k-1;i++){
            newtail=newtail->next;
        }
        ListNode* newhead=newtail->next;
        temp->next=head;
        newtail->next=NULL;
        return newhead;
    }
};