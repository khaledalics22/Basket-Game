#include "apple.h"
#include "graph.h"
Apple::Apple()
{
	x=rand()%( graph::getw()-1)+1; 
	y=rand()&4; 
 

}
void Apple::setApple()
{   

	 
	x=rand()%( graph::getw()-1)+1; 
	y=rand()%4; 

}
int Apple::getx(){return x; }
int Apple::gety(){return y; }
void Apple::move(){y++; }
void Apple::setscore(){score++; } 
int Apple::getscore(){return score; } 
