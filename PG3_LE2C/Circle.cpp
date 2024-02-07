#include "Circle.h"
#include <stdio.h>

Circle::Circle() {

}

Circle::~Circle() {

}

void Circle::Size() {
	radius = radius * radius * 3.14;
}

void Circle::Draw() {
	printf("%f\n", radius);
}