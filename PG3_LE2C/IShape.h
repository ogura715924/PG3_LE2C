#pragma once
class IShape
{
public://�����o�֐�

	//�ʐ�
	virtual void Size() = 0;
	//�`��
	virtual void Draw() = 0;

protected://�����o�ϐ�
	//���O
	const char* name;
};

