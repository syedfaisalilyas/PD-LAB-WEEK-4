#include <iostream>
using namespace std;
void Airline(string,float,float,float,float,float);
main(){
  string name;
  int value;
  float dis_p,dis_ire,dis_ind,dis_eng,dis_c;
  cout <<"Enter The Country Name:";
  cin>>name;
  cout <<"Enter The Ticket Price in Dollars:";
  cin>>value;
  dis_p = (5*value)/100;
  dis_ire = (10*value)/100;
  dis_ind = (20*value)/100;
  dis_eng = (30*value)/100;
  dis_c = (45*value)/100;

  Airline(name,dis_p,dis_ire,dis_ind,dis_eng,dis_c );
}

void Airline(string name,float dis_p,float dis_ire,float dis_ind,float dis_eng,float dis_c)
{ if(name == "pakistan"){cout<<"Your discounted price is:"<<dis_p;}
  if(name == "ireland"){cout<<"Your discounted price is:"<<dis_ire;}
  if(name == "india"){cout<<"Your discounted price is:"<<dis_ind;}
  if(name == "england"){cout<<"Your discounted price is:"<<dis_eng;}
  if(name == "canada"){cout<<"Your discounted price is:"<<dis_c;}
}