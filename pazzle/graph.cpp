#include "graph.h"
graph::graph()
{

}
int graph::geth(){return h; }
int graph::getw(){return w; }
	void graph:: movebasket(int Action)
	{   b.move(Action); }
void graph::moveApple()
{
	for (int i=0 ;i<3; i++)
	{
		a[i].move(); 
	}
}
void graph::draw_graph()
{
	system("cls");
	int u=0;  
	for (int j=0; j<h; j++)
	{
		cout<<'$';
		if (j==0||j==h-1)
		{
		for (int i=1; i<w-1; i++)
		{
			cout<<'$'; 
		}
		}
		else 
		{
			for(int i=1;i<w-1; i++)
			{ 
				u=0;
					for (int h=0; h<3; h++)
					{
						if (i==a[h].getx()&&j==a[h].gety())
							{cout<<"@" ; u++;break;}
						
					}	
					for (int h=0; h<15; h++)
					{
						if (i==b.getBX(h)&&j==b.getBY(h))
						{	cout<<"#";u++;break; } 
					}
		
				if (u>0)
				{ 
					continue; 
				}
					cout<<' ';
			}
		}
		   	cout<<'$';
		cout<<endl; 
	}
	cout<<"Score= "<<Apple::getscore();
}
void graph::check ()
{
	for (int i=0;i<7;i++)
	{
		for (int j=0;j<3; j++)
		{
			if (b.getBX(i)==a[j].getx ()&&b.getBY(i)==a[j].gety())
				{
					a[j].setApple(); 
					Apple::setscore(); 
			}
			else if(geth()==a[j].gety())
					a[j].setApple(); 

		}
	}

}