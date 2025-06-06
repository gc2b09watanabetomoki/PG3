#pragma once
#include "IShape.h"


class Circle : public Shape {
public:
	Circle();
	~Circle();

	void Size() override;
	void Draw() override;
	// îºåa
	float radius = 5.1f;
	// ñ êœ
	float size;
private:
};