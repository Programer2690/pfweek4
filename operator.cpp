#include<iostream>
using namespace std;
void division(int num1,int num2);
void sum(int num1,int num2);
void product(int num1,int num2);
void subtract(int num1,int num2);
main()
{
 int num1, num2;
 char op;

 cout<<"enter first number:";
 cin>>num1;
 cout<<"enter second number:";
 cin>>num2;
 cout<<"enter operator:";
 cin>>op;
 if(op== '+' )
  {sum(num1,num2);
  }
 if(op=='*')
  {product(num1,num2);
  } 
 if(op=='-')
  {subtract(num1,num2);
  }
 if(op=='/')
  {division(num1,num2);
  }
}

void sum(int num1,int num2)
   
   {
    int sum;
    sum=num1+num2;
    cout<<"sum="<<sum;  
   }
void product(int num1,int num2)
    {int product;
     product=num1*num2;
     cout<<"product"<<product;    
    }
void subtract(int num1,int num2)    
    {int subtract;
     subtract=num1-num2;
     cout<<"subtract="<<subtract;  
    }
void division(int num1,int num2)    
    {
     int division;
     division=num1/num2;
     cout<<"division="<<division;  
    }



 