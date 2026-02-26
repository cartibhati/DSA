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
        ListNode* temp=head;

        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        if(k==0){
            return head;
        }
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }

        temp=head;
        k=k%len;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;

        temp=head;
        int diff=len-k-1;
        while(diff--){
            temp=temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = NULL;
        return newHead;
    }
};