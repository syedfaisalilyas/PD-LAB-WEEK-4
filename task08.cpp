#include <iostream>
using namespace std;
void Equal(int,int);
main(){
  int num1,num2;
  cout <<"Enter your 1st integer:";
  cin>>num1;
  cout <<"Enter your 2nd integer:";
  cin>>num2;
  Equal(num1,num2);
}

void Equal(int num1,int num2)
{ if(num1==num2){cout<<"They are equal!";}
  if(num1!=num2){cout<<"They are not equal!";}  
}