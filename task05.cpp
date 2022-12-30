#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void Name();

main(){
      system("cls");
      gotoxy(25, 32);
      Name();
}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void Name()
{
cout<<"                                                                         "<<endl;
cout<<"            #######    ######    ########    ###     #######     #                "<<endl;
cout<<"            #         #      #       #     #    #   #       #    #        "<<endl;
cout<<"            #        #        #      #    #        #         #   #           "<<endl;
cout<<"            #####    ##########      #     # ##    ###########   #       "<<endl;
cout<<"            #        #        #      #         #   #         #   #      "<<endl;
cout<<"            #        #        #      #    #     #  #         #   #         "<<endl;
cout<<"            #        #        #  ########   # #    #         #   ##########      "<<endl;

}