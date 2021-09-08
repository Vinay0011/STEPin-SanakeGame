#include "header.h"

void setup()
{
	gameover = 0;

	// Stores height and width
	x = height / 2;
	y = width / 2;
label1:
	fruitx = rand() % 20;
	if (fruitx == 0)
		goto label1;
label2:
	fruity = rand() % 20;
	if (fruity == 0)
		goto label2;
	score = 0;
}

// Function to draw the boundaries

