#include <Windows.h>
#include <conio.h>
#include "graph.h"
#define Exit 33
int graph::w=35;
int graph::h=20;
int Apple::score=0;


int main ()
{ 
	graph g;
	int Action=NULL ; 
	 do 
	 {
		 g.draw_graph(); 
		 if (_kbhit())
			 g.movebasket(_getch()); 
		 g.check();
		 g.moveApple(); 
		 Sleep(15); 
	 }
	 while (Action !=Exit); 
	 return 0; 
}
