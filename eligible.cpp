#include<iostream>
using namespace std;

void iseligible(int age);

main()
{ 
   while(true)
   {
  int age;
  cout<<"enter your age:";
  cin>>age;
  if(age>=18)
  {
  cout<<"you are eligible"<<endl;
  }

  if(age<18)
  {
  cout<<"you are not eligible"<<endl;
  }
   }
}
