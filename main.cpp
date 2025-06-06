#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {
	Shape* shape[2];

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			shape[i] = new Circle;
		} else {
			shape[i] = new Rectangle;
		}
	}

	// ŠÖ”‚ÌŽÀs
	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
		shape[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete shape[i];
	}
	return 0;
}