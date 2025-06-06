#pragma once
#include "IShape.h"


class Circle : public Shape {
public:
	Circle();
	~Circle();

	void Size() override;
	void Draw() override;
	float radius = 5.1f;
	float size;
private:
};