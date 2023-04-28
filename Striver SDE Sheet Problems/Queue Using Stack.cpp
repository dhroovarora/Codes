https://www.codingninjas.com/codestudio/problems/queue-using-stack_799482?topList=striver-sde-sheet-problems&leftPanelTab=0




#include<stack>
class Queue {
    // Define the data members(if any) here.
    stack<int> s1;
    stack<int> s2;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        s1.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(isEmpty())
            return -1;
        if(!s1.empty() && s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ans = s2.top();
        s2.pop();
        return ans;
    }

    int peek() {
        // Implement the peek() function here.
        if(isEmpty())
            return -1;
        if(!s1.empty() && s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return s1.empty() && s2.empty();
    }
};