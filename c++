// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream> // std::cin, std::cout
#include <iomanip> // for set width and special format
using namespace std; // for standard input and output stream
int returnpos(int x, int y, int z)
{
	if (x == 0 && y == 0 && z == 0)
		return false;
	if (x == 3 && y == 0 && z != 0)
		return true;
	else
		return false;
}
typedef struct
{
	unsigned char N : 1;
	unsigned char E : 1;
	unsigned char S : 1;
	unsigned char W : 1;
	unsigned char V : 1;
	unsigned char vic : 1;
	unsigned char fill : 2;
}Grid;
int main()
{
	int x = 0;
	int y = 0;
	int z = 1;
	char last = 'S';
	Grid field[4][4]{ 0x05,0x03,0x09,0x07 };
	{0x09, 0x04, 0x02, 0x0b; }
	{0x0a, 0x09, 0x06, 0x0a; }
	{0x0e, 0x0c, 0x05, 0x06; }
	do	{

		if (getchar() == '\n')
		{
			cout << "dodo";
		}
		x++;
	} while (returnpos(x,y,z)==false);
	return 0;
}
