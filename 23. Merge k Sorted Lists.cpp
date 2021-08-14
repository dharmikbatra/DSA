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
    ListNode* mergeKLists(vector<ListNode*>& A) {
        if(A.size()==0){return NULL;}
        if(A.size()==1){return A[0];}
        int i;
        priority_queue<int,vector<int>,greater<int>>minh;
        for(i=0;i<A.size();i++){
            if(A[i]==NULL)continue;
            ListNode *t=A[i];
            while(t){minh.push(t->val);t=t->next;}
        }
        if(A[0]==NULL){
            i=1;
            while(i<A.size() && A[i]==NULL){i++;}
            if(i!=A.size()){
                A[0]=A[i];
                A[i]=NULL;
            }
        }
        
        for(i=0;i<A.size();i++){
             if(A[i]==NULL)continue;
            ListNode *t=A[i],*q;
            while(t && !minh.empty()){q=t;t->val=minh.top();minh.pop();t=t->next;}
            while(i+1<A.size() && A[i+1]==NULL){i++;}
            if(i+1!=A.size())
            q->next=A[i+1];
        }
        return A[0];
    }
};