#include<iostream>
using namespace std;

class CWH{
    protected:
        char title[30];
        float rating;
    public:
        CWH(char *s,float r){
            strcpy(title, s);
            rating = r;
        } 
        virtual void display(){}
};

class CWHvideo: public CWH
{
    float videolength;
    public:
        CWHvideo(char *s, float r, float vl): CWH(s, r){
            videolength = vl;
        }

};

class CWHText: public CWH
{
    int words;
    public:
        CWHText(char *s, float r, int wc): CWH(s, r){
            words = wc;
        }
};
int main(){
    
    return 0;
}