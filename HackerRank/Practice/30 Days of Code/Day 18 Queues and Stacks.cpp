https://www.hackerrank.com/challenges/30-queues-stacks/problem?isFullScreen=true




#include <bits/stdc++.h>

using namespace std;

class Solution {
    string queue="", stack="";
    public:
        void pushCharacter(char c) {
            this->stack = c + this->stack;
        };
        void enqueueCharacter(char c){
            this->queue += c;
        };
        char popCharacter() {
            char c = this->stack[0];
            this->stack = this->stack.substr(1);
            return c;
        };
        char dequeueCharacter() {
            char c = this->queue[0];
            this->queue = this->queue.substr(1);
            return c;
        };
};