class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nm1, vector<int>& nm2) {
        stack<int> st1,st2;
        vector<int> ans;
        for(int i=nm2.size()-1;i>=0;i--){
            st1.push(nm2[i]);
        }
        for(int i=0;i<nm1.size();i++){
            while(st1.top()!=nm1[i]){
                st2.push(st1.top());
                st1.pop();
            }
            int k =nm1[i];
            st2.push(k);
            while((!st1.empty()) && st1.top()<=k){st2.push(st1.top());st1.pop();}
            if(!st1.empty()){ans.push_back(st1.top());}
            else{ans.push_back(-1);}
            while(!st2.empty()){st1.push(st2.top());st2.pop();}
        }
        return ans;
    }
};