#pragma once
#include"Microwave.h"

class Heating:public Microwave
{
public:
	 Heating();
	~Heating();
	//�U��
	void Switch() override;

private:

};

