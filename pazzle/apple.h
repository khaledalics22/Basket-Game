
#pragma once
#include <iostream>

class graph;


using namespace std; 

class Apple
{
	int x,y ; 
	static int score; 
public: 
	Apple(); 
	int getx(); 
	int gety(); 
	void setApple(); 
	static void setscore(); 
	 static int getscore(); 

	void move(); 
}; 