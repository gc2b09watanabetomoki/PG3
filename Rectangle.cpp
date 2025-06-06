#include "Rectangle.h"
#include "stdio.h"
Rectangle::Rectangle() {

}
Rectangle::~Rectangle() {

}
// –ÊÏ‚ğ‹‚ß‚é ‰¡•~‚‚³
void Rectangle::Size() {
	size = width * height;
}
// –ÊÏ‚Ì’l‚ğ•\¦
void Rectangle::Draw() {
	printf("Rectangle ‚Ì size ‚Í %6.2f\n", size);
}
