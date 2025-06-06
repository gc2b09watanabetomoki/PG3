#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	Circle* circle;
	circle = new Circle;
	Rectangle* rectangle;
	rectangle = new Rectangle;

	circle->Size();
	circle->Draw();

	rectangle->Size();
	rectangle->Draw();

	return 0;
}