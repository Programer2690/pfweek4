#include<iostream>
using namespace std;

void sum(int num1,int num2);
void product(int num1,int num2);
void subtract(int num1,int num2);

main()
{
 int num1,num2;
 cout<<"enter first number";
 cin>>num1;
 cout<<"enter second number"; 
 cin>>num2;
 sum(num1,num2);
 product(num1,num2);
 subtract(num1,num2);
}
 void sum(int num1,int num2)
 {
 int sum;

 sum=num1+num2;
 cout<<"sum:"<<sum<<endl;
 }
 void product(int num1,int num2)
 {
 int product;
 product=num1*num2;
 cout<<"product:"<<product<<endl;
 }
 void subtract(int num1,int num2)
 {
 int subtract; 
 subtract=num1-num2;
 cout<<"difference:"<<subtract<<endl;
 }
