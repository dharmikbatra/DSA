class Solution {
public:
    stack<int> generate(int A){
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(1);
        int k = 2;
        int i=2;
        while(k<=A){
            ans.push_back(k);
            k = ans[i]+ans[i-1];
            i++;
        }
        stack<int> st;
        for(i=1;i<ans.size();i++){
            st.push(ans[i]);
        }
        return st;
    }
    int findMinFibonacciNumbers(int A) {
        stack<int> st = generate(A);
        int ans=0;
        while(!st.empty() && A>0){
            if(A<st.top()){st.pop();continue;}
            else{
                A -= st.top();
                ans++;
            }
        }
        return ans;
    }
};