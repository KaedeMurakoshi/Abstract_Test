#pragma once
#include"Common.h"

class Enemy
{
public:
	// �������z�֐�
	virtual void Attack(Enemy& enemy) = 0;	// �����Damage()���Ă�
	virtual void PlayBase(Enemy& enemy) = 0;

	Enemy(int hp, int atk);
	void Play(Enemy& enemy);	// �U�����@ �A�b�v�L���X�g�ŌĂяo��
	
	int GetHp() const{ return _hp; }
	int GetAtk() const{ return _atk; }
	void Damage(int damage);	// �_���[�W���󂯂�

protected:
	int _hp;
	int _maxHp;
	int _atk;
};

