#ifndef SETCOLOR_H_INCLUDED
#define SETCOLOR_H_INCLUDED

#include <windows.h>


void SetColor(int ForgC)
 {
      WORD wColor;
      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }

 /*

    0 = Black       8  = Gray
    1 = Blue        9 = Light Blue
    2 = Green       10 = Light Green
    3 = Aqua        11 = Light Aqua
    4 = Red         12= Light Red
    5 = Purple      13 = Light Purple
    6 = Yellow      14 = Light Yellow
    7 = White       15= Bright White

    */


#endif // SETCOLOR_H_INCLUDED
