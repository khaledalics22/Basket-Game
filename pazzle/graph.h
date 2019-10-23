#pragma once
#include "apple.h"
#include "basket.h"
class graph
{
	static int w, h; 
	Apple a[3]; 
	basket b; 
public: 
	graph();
	static int  getw(); 
	static int  geth(); 
	void draw_graph(); 
	void moveApple(); 
	void movebasket(int Action); 
	void check() ; 

};