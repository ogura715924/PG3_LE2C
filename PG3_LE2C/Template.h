#pragma once
template <typename T1, typename T2>


//����N���X
class Template {
public:
	//�����o�ϐ�
	T1 min;
	T2 max;

	//�R���X�g���N�^
	Template(T1 min, T2 max) :min(min), max(max) {};
	double doublenum = 0;
	int intnum = 0;
	float floatnum = 0;

	T1 Min() {
		if (min >= max) {
			doublenum = max;
			intnum = max;
			floatnum = max;
		}
		else if (min <= max) {
			doublenum = min;
			intnum = min;
			floatnum = min;
		}
		return static_cast<T1>(min);
	}
};
