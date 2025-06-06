#include "Circle.h"
#include "stdio.h"
Circle::Circle() {

}
Circle::~Circle(){

}
void Circle::Size() {
	size = radius * radius * 3.14f;
}
void Circle::Draw() {
	printf("Circle ‚Ì size ‚Í %6.2f\n", size);
}
