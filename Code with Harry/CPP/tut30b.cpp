#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
// Quick Quiz answer in tut30c.cpp
// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those points.

// Use these examples to check your code
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 11) is 10
// Distance between (1, 0) and (71, 0) is 70

int main(){
    Point p(1, 1);
    p.displayPoint();
    
    Point q(4, 6);
    q.displayPoint();
    return 0;
}