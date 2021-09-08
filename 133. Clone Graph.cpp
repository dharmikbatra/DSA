/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node *curr, Node* node, vector<Node*> &vis){
        vis[node->val]=node;
        for(auto ele:curr->neighbors){
            if(vis[ele->val]==NULL){
                Node *temp=new Node(ele->val);
                node->neighbors.push_back(temp);
                dfs(ele,temp,vis);
            }else{
                node->neighbors.push_back(vis[ele->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL){return NULL;}
        Node *ans;
        vector<Node*> vis(1000,NULL);
        ans = new Node(node->val);
        vis[node->val]=ans;
        for(auto curr:node->neighbors){
            if(vis[curr->val]==NULL){
                Node *temp = new Node(curr->val);
                ans->neighbors.push_back(temp);
                // vis[curr->val]=temp;
                dfs(curr,temp,vis);
            }else{
                ans->neighbors.push_back(vis[curr->val]);
            }
        }
        return ans;
        
    }
};