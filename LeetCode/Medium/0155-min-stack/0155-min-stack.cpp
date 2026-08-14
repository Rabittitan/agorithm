class MinStack {
public:
    
    stack<int> s;
    int minElement = INT_MAX;
    
    void push(int value) {

        if(minElement >= value){
            s.push(minElement);
            minElement = value;
        }
        s.push(value);
    }
    
    void pop() {
        if(minElement == s.top()){
            s.pop();
            minElement = s.top();
        }

        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minElement;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */