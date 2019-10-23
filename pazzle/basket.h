#pragma once
class graph;

class basket
{
	int x[15],y[15];
public: 
	basket();
	int getBX(int i); 
	int getBY(int i); 
    void move(int Action);
};

