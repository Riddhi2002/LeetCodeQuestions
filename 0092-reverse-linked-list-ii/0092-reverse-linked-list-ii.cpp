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
private:
    ListNode* reverseList(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nxt;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev=NULL;
        int count=1;
        ListNode* curr=head;
        while(count!=left){
            prev=curr;
            curr=curr->next;
            count++;
        }
        ListNode* start=curr;
        while(count!=right){
            curr=curr->next;
            count++;
        }
        ListNode* rest=curr->next;
        curr->next=NULL;
        ListNode* newhead=reverseList(start);
        if(prev!=NULL){
            prev->next=newhead;
        }
        curr=newhead;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=rest;
        if(left==1){
            return newhead;
        }
        else{
            return head;
        }
    }
};