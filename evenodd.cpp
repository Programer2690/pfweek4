#include<iostream>
using namespace std;
void iseven(int num);
void isodd(int num);
main()
{
 while(true)
 {
  int num;
  cout<<"enter number:";
  cin>>num;
  iseven(num);
  isodd(num);
 }
}
void iseven(int num)
{
if(num%2==0)
   {
   cout<<"it is even"<<endl;
   }

}
void isodd(int num)
{
if(num%2!=0)
   {
   cout<<"It is odd"<<endl;
   }

}