#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
/*
class {{derived-class-name}}  : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc........
}
Notes:
1. Default visibility mode is private
2. Public visibility mode: Public members of the base class becomes public members of the derived class
3. Private visibility mode: Public members of the base class becomes private members of the derived class
4. Private members are never inherited 
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee dhroov(1), elon(2);
    cout << dhroov.salary << endl;
    cout << elon.salary << endl;
    Programmer skillF(11);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}