
class D : public A,public B,public C
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
            //  while(val!=new_val)
            //  {
            //     if(new_val%2==0){
            //      //call a
            //         A::func(val);
            //  }
            //     else if(new_val%3==0){
            //      // call b
            //         B ::func(val);
            //  }
            //     else if(new_val%5 == 0){
            //      //call c;
            //         C ::func(val); 
            //  }
            //  }   
                int a = new_val;
     while ( a %2 == 0)
     {
         a = a/2;
         A::func(val);
     }
     while ( a % 3 == 0)
     {
         a = a/3;
         B::func(val);
     }
     while ( a % 5 == 0)
     {
         a = a/5;
         C::func(val);
     }
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};
