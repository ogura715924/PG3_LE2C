#include "IShape.h"
#include"stdio.h"

void IShape::Size() {
	name = "面積";
}

void IShape::Draw() {
	printf("%Sの面積の表示");
}
