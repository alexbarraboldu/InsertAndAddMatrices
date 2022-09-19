#include "Header.h"

int main()
{
	///	Base Image | All Blank
	cImage a;
	a.width = width;
	a.height = height;
	a.posX = 0;
	a.posY = 0;
	a.image = new bool[width * height];
	for (size_t i = 0; i < width * height; i++)
	{
		a.image[i] = false;
	}

	///	First Image
	cImage b;
	b.width = 4;
	b.height = 2;
	b.posX = 1;
	b.posY = 1;
	b.image = new bool[b.width * b.height];
	for (size_t i = 0; i < b.width * b.height; i++)
	{
		b.image[i] = true;
	}

	///	Insert only test
	//cImage d = Test_InsertImage(a, b);

	///	Second Image
	cImage c;
	c.width = 2;
	c.height = 2;
	c.posX = 6;
	c.posY = 3;
	c.image = new bool[c.width * c.height];
	for (size_t i = 0; i < c.width * c.height; i++)
	{
		c.image[i] = true;
	}

	///	Add and Insert test
	cImage d = Test_AddImages(b, c);
	Test_InsertImage(a, d);

	return 0;
}