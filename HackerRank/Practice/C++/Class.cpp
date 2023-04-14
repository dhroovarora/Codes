https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true




#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private:
        int a,b;
        string c,d,f,p,r;
    public:
        void set_age(int q) {
            a = q;
        }
        void set_standard(int q) {
           b = q;
        }
        void set_first_name(string w) {
            c = w;
        }
        void set_last_name(string w) {
            d = w;
        }
        int get_age() {
            return a;
        }
        int get_standard() {
            return b;
        }
        string get_first_name() {
            return c;
        }
        string get_last_name() {
            return d;
        }
        string to_string() {
            stringstream ss;
            ss << a;
            ss >> p;
            stringstream aa;
            aa << b;
            aa >> r;
            f = p + "," + c + "," + d + "," + r;
            return f;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}