/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {

    Node* top;
    
    int count;
  public:
    myStack() {
        // Initialize your data members
        
        top = nullptr;
        
        count = 0;
    }

    bool isEmpty() {
        // check if the stack is empty
        
        return (nullptr == top);
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        
        Node* tempNode = new Node(x);
        tempNode->next = top;
        
        top = tempNode;
        
        count++;
    }

    void pop() {
        // Removes the top element of the stack
        if(nullptr == top)
        {
            return;
        }
        
        Node* tempNode = top;
        
        top = top->next;
        
        int val = tempNode->data;
        
        count--;
        
        delete tempNode;
        
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        
        if(nullptr == top)
        {
            return -1;
        }
        
        return top->data;
    }

    int size() {
        // Returns the current size of the stack.
        
        return count;
    }
};