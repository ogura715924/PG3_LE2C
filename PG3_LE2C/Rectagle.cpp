#include "Rectagle.h"
#include <stdio.h>

Rectagle::Rectagle() {

}

Rectagle::~Rectagle() {

}

void Rectagle::Size() {
	radius = radius * radius;
}

void Rectagle::Draw() {
	printf("%f\n", radius);
}