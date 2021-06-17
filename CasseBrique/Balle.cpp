/*#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h> 

using namespace sf;

class Balle
{
private:
	int pos_bx = 200;
	int pos_by = 350;
	int rayon_b = 10;
	int dir;
	float stepx = 2;
	float stepy = -2;

public:

	void majBall();
	int rebondBr(int, int, int, int);

};

void Balle::majBall()
{
	if (dir == 1) // Direction Sud-Est
	{
		pos_bx = pos_bx + 2;
		pos_by = pos_by + 2;
	}

	if (dir == 2) // Direction Sud-Ouest
	{
		pos_bx = pos_bx - 2;
		pos_by = pos_by + 2;
	}

	if (dir == 3) // Direction Nord-Est
	{
		pos_bx = pos_bx + 2;
		pos_by = pos_by - 2;
	}

	if (dir == 4) // Direction Nord-Ouest
	{
		pos_bx = pos_bx - 2;
		pos_by = pos_by - 2;
	}
}

int Balle::rebondBr(int pos_brx, int pos_bry, int br.getLargBr())
{
	if (dir == 1)
	{
		if (pos_bx == pos_brx)
			dir = 2;
		if (pos_by == pos_bry)
			dir = 3;
	}
	if (dir == 2)
	{
		if (pos_bx == pos_brx + largBr)
			dir = 1;
		if (pos_by == pos_bry)
			dir = 1;
	}
	if (dir == 3)
	{
		if (pos_bx == pos_brx)
			dir = 2;
		if (pos_by == pos_bry + hautBr)
			dir = 3;
	}
	if (dir == 4)
	{
		if (pos_bx == pos_brx + largBr)
			dir = 2;
		if (pos_by == pos_bry + hautBr)
			dir = 3;
	}
	return dir;
}*/