#include <stdio.h>
#include "DeathEater.h"
#include <memory>
#include "Circle.h"
#include "Rectagle.h"

int main() {
	IShape* shape_eaters[3]{};

	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			shape_eaters[i] = new Circle;
		}
		else {
			shape_eaters[i] = new Rectagle;
		}
		shape_eaters[i]->Size();
		shape_eaters[i]->Draw();
	
		delete shape_eaters[i];
	}

	return 0;
}