#ifndef _CORES_H_
#define _CORES_H_

void ret_color()/*this sets the color of display back to white*/
{
  HANDLE  hConsole;
 
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole,7);
}
   
void setcolor(int color)              /*sets console to an input color number*/
{
  HANDLE  hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole,color);
}
     
void colorfn()                            /*sets console to a random color*/
{
  int color;
  HANDLE  hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   
  srand( time(NULL) );
  color=rand() % 10 + 5;                     /*number between 1 to 15*/
  
  SetConsoleTextAttribute(hConsole,color);
}

void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void gotoxy(short x, short y) 
{

	HANDLE hConsoleOutput;
	COORD Cursor_Pos = {x, y};

	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}

#endif