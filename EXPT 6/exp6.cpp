//addition two complex number
#include<iostream>
using namespace std;
class COMPLEX				//create class of name cmplex
{
 int re,im;
 public:
     void get()					//function to read the input
     {
         cin>>re>>im;
     }

     void display()						//function to display output
     {
         cout<<re<<"+"<<im<<"i";
     }
   void add(COMPLEX c1,COMPLEX c2)			//function to add two numbers
   {
       re=c1.re+c2.re;
       im=c1.im+c2.im;
   }
};//complex

int main()
{
    COMPLEX c1,c2,c3;				//instantiation of objects
    cout<<"\nenter 1st complex no. as real and imaginary part:";
    c1.get();
    cout<<"\nenter 2nd complex no. as real and imaginary part:";
    c2.get();
    cout<<"\n\n the 1st complex no is:";
    c1.display();
    cout<<"\n\n the 2nd complex no is:";
    c2.display();

    c3.add(c1,c2);
    cout<<"\n\n the resultant complex no is:";
    c3.display();

    return 0;
}

