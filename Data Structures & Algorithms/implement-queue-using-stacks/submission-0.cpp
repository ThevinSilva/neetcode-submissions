class MyQueue {
private:
    stack<int> s; 
public:
    MyQueue() {
    }
    
    void push(int x) {
        stack<int> temp;
        int size = s.size();
        for (int i = 0; i < size; i++) {
            temp.push(s.top());
            s.pop();
        }

        s.push(x);

        for(int i = 0; i < size; i++){
            s.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
       int x = s.top();
       s.pop();
       return x; 
    }
    
    int peek() {
       return s.top(); 
    }
    
    bool empty() {
       return s.empty();     
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */