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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *prev,*temp = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;
        }
        n = n/2;
        prev = temp = head;
        for(int i=0;i<n;i++){
            prev = temp;
            temp = temp->next;
        }
        if(prev==temp){return prev->next;}
        prev->next = temp->next;
        // free(temp);
        return head;
        
        
    }
};