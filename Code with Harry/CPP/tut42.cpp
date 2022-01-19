#include <iostream>
#include <math.h>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility 
    functions and performs + , - , * , / and displays the results
    using another function.
    2. ScientificCalculator -Takes input of 2 numbers using a
    utility function and performs any four scietific operation of
    your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using
    these 2 classes:
    Q1. What type of inheritance are you using? --> Multiple inheritance
    Q2. Which mode of inheritance are you using? --> public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of
    simple and scientific calculator
    Q4. How is code reusability implemented?
*/
class SimpleCalculator
{
protected:
    int a, b;

public:
    void set_number1()
    {
        cin >>a >>b;
    }
    void get_number1()
    {
        cout << "The Sum of Numbers is " << a + b << endl;
        cout << "The Difference of Numbers is " << a - b << endl;
        cout << "The Multiplication of Numbers is " << a * b << endl;
        cout << "The Divide of Numbers is " << a / b << endl;
    }
};
class ScientificCalculator
{
protected:
    int a , b;

public:
    void set_number2()
    {
        cin >> a >> b;
    }
    void get_number2()
    {
        cout << "The sin of"<<a<<" is " << sin(a) << "and sin of "<< b<<" is "<< sin(b) << endl;
        cout << "The Square root of " << a << "is " << sqrt(a) << endl;
        cout << "The Square root of " << b << "is " << sqrt(b) << endl;
        cout << "The Sum of Square roots is " << sqrt(a) + sqrt(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{};

int main()
{
    // SimpleCalculator p;
    // p.set_number1();
    // p.get_number1();
    // ScientificCalculator q;
    // q.set_number2();
    // q.get_number2();
    HybridCalculator r;
    r.set_number1();
    r.get_number1();
    r.set_number2();
    r.get_number2();
    return 0;
}