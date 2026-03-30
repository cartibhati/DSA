/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL)
        return NULL;
        if(headB==NULL)
        return NULL;

        int lenA=0;
        int lenB=0;

        ListNode*temp1=headA;
        ListNode*temp2=headB;

        while(temp1!=NULL){
            temp1=temp1->next;
            lenA++;
        }
        while(temp2!=NULL){
            temp2=temp2->next;
            lenB++;
        }

        temp1 = headA;
        temp2 = headB;

        if(lenA>lenB){
            int diff=lenA-lenB;
            while(diff--){
                temp1=temp1->next;
            }
        }
        else{
            int diff=lenB-lenA;
            while(diff--){
                temp2=temp2->next;
            }
        }

        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};