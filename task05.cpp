#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void Name(int, int);

main()
{
  system("cls");
  int x = 20, y = 10;
  gotoxy(x, y);
  Name(x, y);
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void Name(int x, int y)
{
  gotoxy(x, y);
  cout << "                                                                         " << endl;
  gotoxy(x, y + 1);
  cout << "            #######    ######    ########    ###     #######     #                " << endl;
  gotoxy(x, y + 2);
  cout << "            #         #      #       #     #    #   #       #    #        " << endl;
  gotoxy(x, y + 3);
  cout << "            #        #        #      #    #        #         #   #           " << endl;
  gotoxy(x, y + 4);
  cout << "            #####    ##########      #      ###    ###########   #       " << endl;
  gotoxy(x, y + 5);
  cout << "            #        #        #      #         #   #         #   #      " << endl;
  gotoxy(x, y + 6);
  cout << "            #        #        #      #    #     #  #         #   #         " << endl;
  gotoxy(x, y + 7);
  cout << "            #        #        #  ########   # #    #         #   ##########      " << endl;
}
