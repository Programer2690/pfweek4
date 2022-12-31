#include<iostream>
using namespace std;

main()
{
 string name;
 int price,discount;
 cout<<"enter the day you purchase:";
 cin>>name;
 cout<<"enter payable amount:";
 cin>>price;
 if(name=="sunday")
 {
 discount=price-0.10*price;
 cout<<"price after discount="<<discount;
 }
 if (name!="sunday")
 {
 cout<<"no discount! total price is:"<<price;
 }

}