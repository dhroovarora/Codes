#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary; 
} ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
} ;


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;




    // union money m1;
    // m1.rice = 34;
    // m1.car ='c'; 
    // cout<<m1.car;

    // ep dhroov;
    // struct employee Elon;
    // struct employee Bill;
    // dhroov.eId = 1;
    // dhroov.favChar='c';
    // dhroov.salary = 120000000;
    // cout<<"The value is"<<dhroov.eId<<endl;
    // cout<<"The value is"<<dhroov.favChar<<endl;
    // cout<<"The value is"<<dhroov.salary<<endl;
    
    return 0;
}