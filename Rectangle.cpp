#include "Rectangle.h"
#include "stdio.h"
Rectangle::Rectangle() {

}
Rectangle::~Rectangle() {

}
void Rectangle::Size() {
	size = width * height;
}
void Rectangle::Draw() {
	printf("Rectangle ‚Ì size ‚Í %6.2f\n", size);
}
