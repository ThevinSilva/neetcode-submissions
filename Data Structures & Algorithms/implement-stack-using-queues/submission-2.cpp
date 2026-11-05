class MyStack {
private:
    queue<int> q;
    int size = 0;
public:
    MyStack() {}
    
    void push(int x) {
        q.push(x);
        size++;
    }
    
    int pop() {
        for(int i = 0; i < size - 1; i++) {
           q.push(q.front());
           q.pop(); 
        } 
        int x = q.front();
        q.pop();
        size--;
        return x;
    }
    
    int top() {
        for(int i = 0; i < size - 1; i++) {
           q.push(q.front());
           q.pop(); 
        } 
        int x = q.front();
        q.pop();
        q.push(x);
        return x;
    }
    
    bool empty() {
       return size == 0; 
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