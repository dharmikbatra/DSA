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
    int csize(ListNode *head){
        int n=0;
        while(head){
            n++;
            head=head->next;
        }
        return n;
    }
    int pairSum(ListNode* head) {
        int n = csize(head),ans=INT_MIN,k;
        n = n/2;
        ListNode *temp=head;
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<n;i++){
            k = st.top()+temp->val;
            if(k > ans){ans=k;}
            st.pop();
            temp=temp->next;
        }
        return ans;
    }
};