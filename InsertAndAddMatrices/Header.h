#ifndef HEADER_H
#define HEADER_H

#include <iostream>


const int width = 10;
const int height = 5;

struct cImage
{
	int width, height;
	int posX, posY;
	bool* image;
};

cImage Test_AddImages(cImage a, cImage b);
cImage Test_InsertImage(cImage imageBase, cImage imageToInsert);

std::ostream& operator << (std::ostream& os, const cImage& img);


#endif // !HEADER_H
