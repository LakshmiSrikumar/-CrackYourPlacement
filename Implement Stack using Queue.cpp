class MyStack {
public:
queue<pair<int,int>>q;
int i=0;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push({x,i});
        i++;
    }
    
    int pop() {
        auto x = q.back();
        while (q.front()!=x){
            q.push(q.front());
            q.pop();
        }
        q.pop();
        return x.first;
    }
    
    int top() {
        return q.back().first;
    }
    
    bool empty() {
        return q.empty();
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