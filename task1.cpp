#include <iostream>
using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);
void subtract(int number1, int number2);
main()
{
  add(1,1);
  product(2,2);
  subtract(2,1);
}
void add(int number1, int number2)
{
  int sum;
  sum=number1+number2;
  cout<<"sum:"<<sum<<endl;
}
void product(int number1, int number2)
{
  int product;
  product=number1*number2;
  cout<<"product:"<<product<<endl;
}
void subtract(int number1, int number2)
{
  int subtract;
  subtract=number1-number2;
  cout<<"subtract:"<<subtract<<endl;
}






