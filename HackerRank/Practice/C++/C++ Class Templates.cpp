https://www.hackerrank.com/challenges/c-class-templates/problem?isFullScreen=true






/*Write the class AddElements here*/
template <class T> class AddElements {
    private:
    public:
        T element;
        AddElements(T i) {element = i;}
        T add(T i) {return element+i;} 
};
template <> class AddElements <string> {
    private:
    public:
        string element;
        AddElements(string i) {element = i;}
        string concatenate(string element2) {return element+element2;}
};
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';