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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head, *temp;
        head = temp = NULL;
        while(list1 || list2){
            int k;
            if(list1 && list2){
                if(list1->val < list2->val){
                    k = list1->val;
                    list1 = list1->next;
                }else{
                    k = list2->val;
                    list2 = list2->next;
                }
            }else if(list1){
                k = list1->val;
                list1 = list1->next;
                
            }else if(list2){
                k = list2->val;
                list2 = list2->next;
            }
            if(head==NULL){
                head = temp = new ListNode();
                temp->val = k;
            }else{
                temp->next = new ListNode();
                temp=temp->next;
                temp->val = k;
            }
        }
        return head;
    }
};