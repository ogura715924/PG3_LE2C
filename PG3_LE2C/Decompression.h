#pragma once
#include"Microwave.h"

class Decompression:public  Microwave
{
public:
	 Decompression();
	~Decompression();
	//�U��
	void Switch()override;

private:
};

