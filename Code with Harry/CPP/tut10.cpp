#include<iostream>

using namespace std;
int main(){
    /* Loops in C++:
    There are three types of loops in C++:
        1. For Loop
        2. while Loop
        3. do-while Loop
    */

   /*For loop in C++:*/
    // int i=1;
    // cout<<i;
    // i++;

    // Syntax for for loop
    // for(initialization; conditio; updation)
    // {
    //      loop body(C++ code);
    // }


    // for (int i = 0; i <= 40 ; i++) 
    // {
    //     /* code */
    //     cout<<i<<endl; 
    // }
    
    // Example of infinite for loop
    // for (int i = 0; 34 <= 40 ; i++) 
    // {
    //     /* code */
    //     cout<<i<<endl; 
    // }
    
    /* While loop in C++ */
    // Syntax:
    // while(condition):
    // {
    //        C++ statements;
    // }

    // Printing 1 to 40 using while loop
    // int i = 1;
    // while(i<=40)
    // {
    //     cout<<i<<endl;
    //     i++; 
    // }

    // Example of infinite while loop
    // int i = 1;
    // while(true)
    //   {

    //     cout<<i<<endl;
    //     i++;
    //   }

    /* do-whle loop in c++ */
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);


    // Printing 1 to 40 using do-while loop
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++; 
    // }while(false);


    // Quick Quiz : Table of 6
    int i=6;
    while(i<=60)
        {
            cout<<i<<endl;
            i=i+6;
        }


        
    return 0;

}