#include "Circle.h"
#include "stdio.h"
Circle::Circle() {
	
}
Circle::~Circle(){

}
// –ÊÏ‚ğ‹‚ß‚é@”¼Œa~”¼Œa~ƒ®
void Circle::Size() {
	size = radius * radius * 3.14f;
}
// –ÊÏ‚Ì’l‚ğ•\¦
void Circle::Draw() {
	printf("Circle ‚Ì size ‚Í %6.2f\n", size);
}
