#include <iostream>
using namespace std;
void Reverse(string);
main(){
  string value;
  cout <<"Enter True or False:";
  cin>>value;
  Reverse(value);
}

void Reverse(string value)
{ if(value == "true"){cout<<"False";}
  if(value == "false"){cout<<"True";}  
}