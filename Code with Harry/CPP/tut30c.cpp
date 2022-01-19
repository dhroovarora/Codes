#include<iostream>
#include<cmath>
using namespace std;


class distanc{
    int x;
    int y;

    public:
        void setData(int v1, int v2){
            x = v1;
            y = v2;
        }

        void formula(distanc o1, distanc o2){
            x = ((o1.x) - (o2.x))*((o1.x) - (o2.x));
            y = ((o1.x) - (o2.y))*((o1.x) - (o2.y));
        }

        void printNumber(){
            cout<<"Distance between them is "<<sqrt(x + y)<<endl;
        }
};

int main(){
    distanc c1, c2, c3;
    c1.setData(1, 1);

    c2.setData(3, 1);

    c3.formula(c1, c2);
    c3.printNumber();
    return 0;
}