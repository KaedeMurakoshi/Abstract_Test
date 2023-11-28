#pragma once
class Enemy
{
public:
	// �������z�֐�
	virtual void Attack(Enemy& enemy) = 0;
	virtual void PlayBase(Enemy& enemy) = 0;

	void Play(Enemy& enemy);	// �U�����@ �A�b�v�L���X�g�ŌĂяo��
	void Damage(int damage);	// �_���[�W���󂯂�

protected:
	int _hp = 100;
	int _atk = 5;
};

