#pragma once
#include<stdio.h>

class Microwave
{
	public://メンバ関数
		//コンストラクタ
		Microwave();
		//デストラクタ
		virtual	~Microwave();
		//スイッチ
		virtual void Switch();

	protected://メンバ変数
		//名前
		const char* name;

	};