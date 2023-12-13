#pragma once
class IShape
{
public://メンバ関数

	//面積
	virtual void Size() = 0;
	//描画
	virtual void Draw() = 0;

protected://メンバ変数
	//名前
	const char* name;
};

