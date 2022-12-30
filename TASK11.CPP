#include <iostream>
using namespace std;
void Speed(int);
main(){
  int speed;
  cout<<"Speed:";
  cin>>speed;
  Speed(speed);
}

void Speed(int speed)
{ if(speed<=100){cout<<"Perfect! You are going good.";}
  if(speed >100){cout<<"Halt....YOU WILL BE CHALLENGED!!!";}

}