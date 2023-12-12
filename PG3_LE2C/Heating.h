#pragma once
#include"Microwave.h"

class Heating:public Microwave
{
public:
	 Heating();
	~Heating();
	//UŒ‚
	void Switch() override;

private:

};

