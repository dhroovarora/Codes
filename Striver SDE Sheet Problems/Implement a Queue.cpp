https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908?topList=striver-sde-sheet-problems




#include <bits/stdc++.h> 
class Queue {
public:
    int *arr,topper,first;
    Queue() {
        // Implement the Constructor
        arr = new int[5000];
        topper = 0;
        first = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return (topper == first) ? 1 : 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(topper <= 5000)
            arr[topper++] = data;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(first != topper){
            int ans = arr[first++];
            if(first == topper){
                first = 0;
                topper = 0;
            }
            return ans;
        }
        return -1;
    }

    int front() {
        // Implement the front() function
        return (first != topper) ? arr[first] : -1;
    }
};