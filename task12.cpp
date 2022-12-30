#include <iostream>
using namespace std;
void Flower(float,float);
main(){
  int n_red,n_white,n_tulip;
  float price_red,price_white,price_tulip,total_p,dis_p,p_after_dis;
  cout<<"Enter number of red rosses:";
  cin>>n_red;
  cout<<"Enter number of white rosses:";
  cin>>n_white;
  cout<<"Enter number of tulips:";
  cin>>n_tulip;
  price_red = 2.00 * n_red;
  price_white = 4.10 * n_white;
  price_tulip = 2.50 * n_tulip;
  total_p = price_red+price_white+price_tulip;
  dis_p = (20*total_p)/100;
  p_after_dis = total_p - dis_p;
  Flower(total_p,p_after_dis);
}

void Flower(float total_p,float p_after_dis )
{ if(total_p>200){cout<<"Original Price:"<<total_p<<endl<<"Price after discount:"<<p_after_dis;}
  if(total_p<=200){cout<<"Original Price:"<<total_p<<endl<<"Price after discount:"<<total_p;}

}