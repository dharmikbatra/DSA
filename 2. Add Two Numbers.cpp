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
        ListNode *prev,*ans=l1;
        int c=0,k,ex=0;
        while(l1 && l2){
            k= l1->val+l2->val+c;
            if(k>9){c=1;k=k%10;}
            else{c=0;}
            l1->val=k;
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            k = l1->val+c;
            if(k>9){k=k%10;c=1;}
            else{c=0;}
            l1->val=k;
            prev = l1;
            l1=l1->next;
        }
        if(l2){l1=prev;}
        while(l2){
            ex = 1;
            k = l2->val+c;
            if(k>9){k=k%10;c=1;}
            else{c=0;}
            l1->next=new ListNode(k);
            l2=l2->next;
            prev = l1;
            l1=l1->next;
        }
        
        if(c==1 && ex==0){
            prev->next = new ListNode(1);
        }
        if(c==1 && ex==1){
            l1->next = new ListNode(1);
        }
        return ans;
        
    }
};