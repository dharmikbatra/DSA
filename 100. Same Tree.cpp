class Solution {
public:
    bool flag;
    void fxn(TreeNode *p, TreeNode *q){
        if(p==NULL && q==NULL){return;}
        if(p==NULL){flag=false;return;}
        if(q==NULL){flag=false;return;}
        fxn(p->left,q->left);
        if(p->val!=q->val){flag=false;return;}
        fxn(p->right,q->right);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        flag = true;
        fxn(p,q);
        return flag;
    }
};