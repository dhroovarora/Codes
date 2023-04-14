https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true





// Write your Student class here
class Student{
    private:
        int scores[5] , q = 0;
    public:
        void input(){
            for(int i=0;i<5;i++){
                cin>>scores[i];
            }    
        }
        int calculateTotalScore() {
            for(int i=0;i<5;i++){
                q = q + scores[i];
            }
            return q;
        }
};