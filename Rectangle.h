#pragma once
#include "IShape.h"


class Rectangle : public Shape {
public:
	Rectangle();
	~Rectangle();

	void Size() override;
	void Draw() override;

	// ‰¡•
	float width = 10.2f;
	// ‚‚³
	float height = 5.4f;
	// –ÊÏ
	float size;
private:
};