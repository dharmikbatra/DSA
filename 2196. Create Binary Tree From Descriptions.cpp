class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> mp;
        unordered_map<int,int> parent,child;
        for(vector<int> vec:descriptions){
            auto itr0 = mp.find(vec[0]);
            auto itr1= mp.find(vec[1]);
            if(itr0 == mp.end()){
                mp[vec[0]] = new TreeNode(vec[0]);
            }
            if(itr1 == mp.end()){
                mp[vec[1]] = new TreeNode(vec[1]);
            }
            if(vec[2]){
                mp[vec[0]]->left = mp[vec[1]];
            }else{
                mp[vec[0]]->right = mp[vec[1]];
            }
            parent[vec[1]]++;
            child[vec[0]]++;
        }
        for(vector<int> vec:descriptions){
            auto itr1 = parent.find(vec[0]);
            auto itr2 = child.find(vec[0]);
            if(itr2 != child.end() && itr1 == parent.end()){return mp[vec[0]];}
            itr1 = parent.find(vec[1]);
            itr2 = child.find(vec[1]);
            if(itr2 != child.end() && itr1 == parent.end()){return mp[vec[1]];}
        }
        return NULL;
    }
};