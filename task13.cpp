#include <iostream>
using namespace std;
void func(int);
main()
{
  int holidays,working_days,holiday_time,working_time,total;
  cout<<"Enter number of holidays:";
  cin>>holidays;
  working_days=365-holidays;
  holiday_time=holidays*127;
  working_time=63*working_days;
  total=holiday_time+working_time;
  func(total);
  
}

void func(int total)
{ int dif=total-30000;
  int dif1=30000-total;
  int hours1=(dif/60);
  int mins1 =dif%60;
  int hours2=(dif1/60);
  int mins2 =dif1%60;  
  if(total>30000){cout<<"Tom sleeps well"<<hours1<<"hours and "<<mins1<<"mins";}
  if(total<30000){cout<<"Tom will run away"<<hours2<<"hours and "<<mins2<<"mins";}
}