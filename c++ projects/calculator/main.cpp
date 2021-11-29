#include <iostream>
#include <conio.h>
using namespace std;

class calc
{


private:
    int n1;
    int n2;




public:

    void body()

    {
        cout<<"**********************Welcome To Calculator*********************"<<endl;
    }




    void addition(int num1,int num2)


    {
        n1=num1;
        n2=num2;
    }


    int getaddition ()


    {
        return n1+n2;
    }





    void sub(int num1,int num2)


    {
        n1=num1;
        n2=num2;
    }


    int getsub ()


    {
        return n1-n2;


    }




    void mul(int num1,int num2)
    {
        n1=num1;
        n2=num2;
    }


    int getmul()
    {
        return n1*n2;
    }




    void dive(int num1,int num2)
    {
        n1=num1;
        n2=num2;
    }


    int getdive ()
    {
        return n1/n2;

    }







};



int main()
{

calc x;
int n1,n2,option,pass;
char y;
pass=getch();
system("color 3");

do {
    x.body();
cout<<" please enter pin code to continue"<<endl;
cin>>pass;
if(pass==12345){
cout<<"your password has been activated welcome this console calculator made by Eng.Mo.H"<<endl;

}
else{

    cout<<"Error Exit"<<endl;
    exit(1);


}
cout<<"1- addition operation "<<endl;
cout<<"2- subtraction operation "<<endl;
cout<<"3- multiplication operation "<<endl;
cout<<"4- division operation "<<endl;

cin>>option;

switch(option) {

  case 1:
  cout<<" please Enter Your 1st Number :";
  cin>>n1;
  cout<<" please Enter Your 1st Number :";
  cin>>n2;
  x.addition(n1,n2);
  cout<<" Result :"<<n1<<"+"<<n2<<"="<<x.getaddition()<<endl;
  break;




  case 2:
  cout<<" please Enter Your 1st Number :";
  cin>>n1;
  cout<<" please Enter Your 1st Number :";
  cin>>n2;
  x.sub(n1,n2);
  cout<<" Result :"<<n1<<"-"<<n2<<"="<<x.getsub()<<endl;
  break;


  case 3:
  cout<<" please Enter Your 1st Number :";
  cin>>n1;
  cout<<" please Enter Your 1st Number :";
  cin>>n2;
  x.mul(n1,n2);
  cout<<" Result :"<<n1<<"x"<<n2<<"="<<x.getmul()<<endl;
  break;



  case 4:
  cout<<" please Enter Your 1st Number :";
  cin>>n1;
  cout<<" please Enter Your 1st Number :";
  cin>>n2;
  x.dive(n1,n2);
  cout<<" Result :"<<n1<<"/"<<n2<<"="<<x.getdive()<<endl;
  break;


  default:
    cout<<"wrong value "<<endl;



}
cout<<"if you want to repeat the operation type y for yes /n for no"<<endl;
cin>>y;


}while(y=='y');






    getch();
    return 0;
}
