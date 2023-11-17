#pragma once
template <typename T1, typename T2>


//自作クラス
class Template {
public:
	//メンバ変数
	T1 min;
	T2 max;

	//コンストラクタ
	Template(T1 min, T2 max) :min(min), max(max) {};
	double num = 0;
	T1 Min() {
		if (min >= max) {
			num = max;
		}
		else if (min <= max) {
			num = min;
		}
		return static_cast<T1>(num);
	}
};
