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
        int k = n;
        ListNode *temp = head,*prev=head,*curr=head;
        while(temp && k--){
            temp=temp->next;
        }
        if(temp==NULL){head=head->next;}
        while(temp){
            temp=temp->next;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        return head;
    }
};