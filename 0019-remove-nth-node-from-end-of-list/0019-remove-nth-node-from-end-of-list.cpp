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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(head==NULL|| head->next==NULL){
            return NULL;
        }
        if(count-n==0){
            head=head->next;
            return head;
        }
        ListNode* prevptr=head;
        ListNode* currptr=head;
        for(int i=0; i<count-n; i++){
            prevptr=currptr;
            currptr=currptr->next;
        }
        prevptr->next=currptr->next;
        return head;
    }
};