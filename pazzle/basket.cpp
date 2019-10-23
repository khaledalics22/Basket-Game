#include "basket.h"
#define Up 72
#define Dwon 80
#define Left 75
#define Right 77
#include "graph.h"
basket::basket()
{
	x[0]=graph::getw()/2; 

	y[0]=graph::geth()-4; 

	int j=1; 
	for (int i=1;i<7; i++)
	{
			x[i]=x[0]+j;
		    y[i]=y[0];
			j++;  
	}
	j=1;
	for (int i=7;i<12; i++)
	{
			x[i]=x[0]+j;
			y[i]=y[0]+1; 
			j++; 
	}
	j=2;
		for (int i=12;i<15; i++)
		{
			x[i]=x[0]+j;
			y[i]=y[0]+2; 
			j++;
		}
}


void basket::move(int Action)
	{

		switch (Action)
		{
		case Right:
			for (int i=0; i<15;i++)
				x[i]+=2; 
			break; 
		case Left: 
			for (int i=0; i<15;i++)
				x[i]-=2; 
			break; 

		}
	}
int basket::getBX(int i)
{
	return x[i] ; 

}
	int basket::getBY(int i)
	{
		return y[i]; 
	}