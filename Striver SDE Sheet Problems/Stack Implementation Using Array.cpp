https://www.codingninjas.com/codestudio/problems/stack-implementation-using-array_3210209?topList=striver-sde-sheet-problems




#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
    int *arr,size,topper;
    Stack(int capacity) {
        // Write your code here.
        arr = new int[capacity];
        size = capacity;
        topper = -1;
    }

    void push(int num) {
        // Write your code here.
        if(topper != size -1)
            arr[++topper] = num;
    }

    int pop() {
        // Write your code here.
        if(topper !=-1){
            int ans = arr[topper];
            topper--;
            return ans;
        }
        return -1;
    }
    
    int top() {
        // Write your code here.
        return (topper != -1) ? arr[topper] : -1;
    }
    
    int isEmpty() {
        // Write your code here.
        return (topper == -1) ? 1 : 0;
    }
    
    int isFull() {
        // Write your code here.
        return (topper == size - 1) ? 1 : 0;
    }
    
};