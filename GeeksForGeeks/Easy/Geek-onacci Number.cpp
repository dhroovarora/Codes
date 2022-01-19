#include<iostream>
using namespace std;

int geek(int A,int B,int C,int N){
  int q=0;
  if(N==4){
      return A + B + C;
  }  
  else if(N==3){
      return C;
  }
  else if(N==2){
      return B;
  }
  else{
      q = geek(A,B,C,N-1) + geek(A,B,C,N-2) + geek(A,B,C,N-3);
  }
  return q;
}
int main()
 {
	//code
    int T;
    cin>>T;
    while(T--){
        int A,B,C,N,an;
        cin>>A>>B>>C>>N;
        an = geek(A,B,C,N);
        cout<<an<<endl;
    }
	return 0;
}