#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void F(int,int);
void A1(int,int);
void I(int,int);
void S(int,int);
void A2(int,int);
void L(int,int);

main(){ 
  system("cls");
  int x=80,y=5;
  gotoxy(x,y);
  F(x,y);
  A1(x,y);
  I(x,y);
  S(x,y);
  A2(x,y);
  L(x,y);
}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void F(int x,int y){
gotoxy(x,y);
cout<<"      "<<endl;
gotoxy(x,y);
cout<<"######"<<endl;
gotoxy(x,y+1);
cout<<"#"<<endl;
gotoxy(x,y+2);
cout<<"####"<<endl;
gotoxy(x,y+3);
cout<<"#"<<endl;
gotoxy(x,y+4);
cout<<"#"<<endl;
}

void A1(int x,int y){
cout<<"      "<<endl;
gotoxy(x,y+5);
cout<<" #####"<<endl;
gotoxy(x,y+6);
cout<<"#     #           "<<endl;
gotoxy(x,y+7);
cout<<"#######   "<<endl;
gotoxy(x,y+8);
cout<<"#     #"<<endl;
gotoxy(x,y+9);
cout<<"#     # "<<endl;
}

void I(int x,int y){
cout<<"      "<<endl;
gotoxy(x,y+10);
cout<<"#######"<<endl;
gotoxy(x,y+11);
cout<<"   #"<<endl;
gotoxy(x,y+12);
cout<<"   #"<<endl;
gotoxy(x,y+13);
cout<<"   #"<<endl;
gotoxy(x,y+14);
cout<<"#######"<<endl;
}

void S(int x,int y){
cout<<"      "<<endl;
gotoxy(x,y+15);
cout<<"  ####"<<endl;
gotoxy(x,y+16);
cout<<"#     "<<endl;
gotoxy(x,y+17);
cout<<" ### "<<endl;
gotoxy(x,y+18);
cout<<"    #    "<<endl;
gotoxy(x,y+19);
cout<<"####  "<<endl;
}


void A2(int x,int y){
cout<<"      "<<endl;
gotoxy(x,y+20);
cout<<" #####"<<endl;
gotoxy(x,y+21);
cout<<"#     #           "<<endl;
gotoxy(x,y+22);
cout<<"#######   "<<endl;
gotoxy(x,y+23);
cout<<"#     #"<<endl;
gotoxy(x,y+24);
cout<<"#     # "<<endl;
}

void L(int x,int y){
cout<<"      "<<endl;
gotoxy(x,y+25);
cout<<"#"<<endl;
gotoxy(x,y+26);
cout<<"#"<<endl;
gotoxy(x,y+27);
cout<<"#"<<endl;
gotoxy(x,y+28);
cout<<"#"<<endl;
gotoxy(x,y+29);
cout<<"######"<<endl;
}