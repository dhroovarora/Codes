https://www.hackerrank.com/challenges/30-abstract-classes/problem?isFullScreen=true






// Write your MyBook class here
//Write MyBook class
class MyBook : public Book {
    private:
        int price;
    
    public:
        MyBook(string title, string author, int price) : Book(title, author), price(price) {
            
        }
    
        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
        }
};