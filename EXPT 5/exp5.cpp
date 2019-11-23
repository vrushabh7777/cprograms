#include<iostream>
#include<iomanip>
using namespace std;
class student					//declare the class of type student
{
    private:char name[30],grade;			//declare the variables
    int usn;
    float mcmos,mcplus,mapp,total,percentage;
    public:
        student()			//initialize the student using constructor
        {
            cout<<"\nIn student Constructor";
            name[0]='\0';
            usn=0;
            grade='\0';
            mcmos=mcplus=mapp=total=percentage=0.0;
        }
        void getdata()				//define function to read the data
        {
            cout<<endl<<"enter Name:";
            cin>>name;
            cout<<endl<<"enter usn:";
            cin>>usn;
            cout<<endl<<"enter marks in cmos:";
            cin>>mcmos;
            cout<<endl<<"enter marks in c++:";
            cin>>mcplus;
            cout<<endl<<"enter marks in app:";
            cin>>mapp;

        }
        void calculate()			//define function calculate to compute percentge
        {
            total=mcmos+mcplus+mapp;
            percentage=total/300*100;
        }
        void showstudent()			//function to display the information
        {
            cout<<endl<<setprecision(5)<<name<<"\t"<<usn<<"\t"<<mcmos<<"\t"<<mcplus<<"\t"<<mapp<<"\t";
            cout<<setprecision(5)<<total<<"\t"<<percentage<<"\t\t"<<grade;
        }

        void findgrade()      				  //grade conditions
        {
            if(percentage>=80)
                grade='A';
            else if(percentage>=70 && percentage<80)
                grade='B';
            else if(percentage>=60 && percentage<70)
                grade='C';
                else
                    grade='F';
        }
        ~student()           					   //destructor
        {
            cout<<"\n\nIn the student destructor\t";
            cout<<"Year 2019-20"<<endl;
        }
};//student class

int main()
{
    int i,n;						//declare variables and read input
    cout<<"Enter the number of students:";
    cin>>n;
    student a[n];					//call the constructor

    for(i=0;i<n;i++)
    {
        a[i].getdata();					// function call
        a[i].calculate();
        a[i].findgrade();
    }
    cout<<"\nNmae\tusn\tcmos\tcpp\tadv proc total\tpercentage\tgrade"<<endl;
     for(i=0;i<n;i++)
    {
        a[i].showstudent();		//display the total information of student
    }
    return 0;
}
