//Author: Keenan Jacob
#include<iostream>

using namespace std;

int main()
{
 int number1;
 int number2;
 int biggest;

  cout<<"Please enter a whole number:\n";
  cin>>number1;
 
  cout<<"Please enter another whole number:\n";
  cin>>number2;

  if(number1>number2)
  {
  biggest=number1;
  }
  else
  {
  biggest=number2;
  }


  cout<<"Of those two numbers, the biggest is: "<<biggest;

  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
