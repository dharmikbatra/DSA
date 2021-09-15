class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q;
    MyStack() {
        while(!q.empty()){q.pop();}
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q.size()<1){return -1;}
        int n = q.size();
        for(int i=1;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        n = q.front();
        q.pop();
        return n;
    }
    
    /** Get the top element. */
    int top() {
        if(q.size()<1){return -1;}
        int n = q.size();
        for(int i=1;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        n = q.front();
        q.pop();
        q.push(n);
        return n;        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q.size()==0){return true;}
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */