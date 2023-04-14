https://www.hackerrank.com/challenges/rectangle-area/problem?isFullScreen=true





/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public:
    int w ;
    int h ;
        void display(){
        cout<<w<<" "<<h <<endl;
    }
};
class RectangleArea : public Rectangle{
    public:
          void read_input(){
          cin >>w>>h;
          }
      void display(){
          cout<<w*h;
      }
};