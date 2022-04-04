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
    ListNode* swapNodes(ListNode* head, int k) {
        int n =0,l;
        ListNode* temp = head, *temp2;
        while(temp){n++;temp=temp->next;}
        l = n-k;
        k--;
        temp = temp2 = head;
        for(int i=0;i<k;i++){
            temp= temp->next;
        }
        for(int i=0;i<l;i++){
            temp2= temp2->next;
        }
        l = temp->val;
        temp->val = temp2->val;
        temp2->val = l;
        return head;
    }
};