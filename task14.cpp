#include <iostream>
using namespace std;
void uams();
void CompareAggregates(float,float,string,string);

main()
{
   system("cls");
   uams();
   cout << "Enter choices:";
   int choice;
   cin >> choice;
   string name1;
   char key;
   int matric1, ecat1, inter1;
   float aggregate1;
   float g_total1;
   float r_total1;   
   string name2;
   int matric2, ecat2, inter2;
   float aggregate2;
   float g_total2; 
   float r_total2;   


   while (true)
   {   system("cls");
      if (choice == 1)
      {   cout<<"You choosed: 1"<<endl;
          cout << "Enter your name:";
          cin >> name1;
          cout << "Enter your matric marks:";
          cin >> matric1;
          cout << "Enter your inter marks:";
          cin >> inter1;
          cout << "Enter your ECAT marks:";
          cin >> ecat1;
          cout << "Press any key to continue....!";
          cin>>key;          
      }
      if (choice == 2)
      {   cout<<"You choosed: 2"<<endl;
          cout << "Enter your name:";
          cin >> name2;
          cout << "Enter your matric marks:";
          cin >> matric2;
          cout << "Enter your inter marks:";
          cin >> inter2;
          cout << "Enter your ECAT marks:";
          cin >> ecat2;
          cout << "Press any key to continue....!";
          cin>>key;
         
      }
      if (choice == 3)
      {  cout<<"You choosed: 3"<<endl;
         g_total1= (30*matric1)/100 + (30*inter1)/100 + (40*ecat1)/100;
         r_total1= (30*1100)/100 + (30*550)/100 + (40*400)/100; 
         aggregate1 = (g_total1/r_total1)*100;
         cout<<aggregate1<<endl;
         cout << "Press any key to continue....!";
         cin>>key;
   
      }
      if (choice == 4)
      {  cout<<"You choosed: 4"<<endl;
         g_total2= (30*matric2)/100 + (30*inter2)/100 + (40*ecat2)/100;
         r_total2= (30*1100)/100 + (30*550)/100 + (40*400)/100;
         aggregate2 = (g_total2/r_total2)*100;
         cout<<aggregate2<<endl;
         cout << "Press any key to continue....!";
         cin>>key;
      }
      if (choice == 5)
      {  cout<<"You choosed: 5"<<endl;
         CompareAggregates(aggregate1,aggregate2,name1,name2);
         cout<<endl;
         cout << "Press any key to continue....!";
         cin>>key;
      }
      system("cls");
      uams();
      cout << "Enter choices:";
      cin >> choice;
   }
}

void uams()
{
   cout << "****************" << endl;
   cout << "*  UET LAHORE  *" << endl;
   cout << "****************" << endl;
   cout << endl
        << endl
        << endl;
   cout << "WELCOME TO UET ADMISSION MANAGEMENT SYSTEM" << endl
        << endl;
   cout << "Press 1 to enter the details of first student!" << endl;
   cout << "Press 2 to enter the details of second student!" << endl;
   cout << "Press 3 to calculate the aggregate of first student!" << endl;
   cout << "Press 4 to calculate the aggregate of second student!" << endl;
   cout << "Press 5 to display the student with roll number 01!" << endl;
}


void CompareAggregates(float aggregate1,float aggregate2,string name1,string name2) 
{
   if(aggregate1>aggregate2){cout<<"Roll Number 01 is:"<<name1;}
   if(aggregate2>aggregate1){cout<<"Roll Number 01 is:"<<name2;}
}
