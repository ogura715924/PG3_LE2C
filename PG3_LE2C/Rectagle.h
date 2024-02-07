#pragma once
#include"IShape.h"

class Rectagle:public IShape
{
public:
	Rectagle();
	~Rectagle();

	void Size() override;
	void Draw() override;

private:
	float radius = 10.0f;
};