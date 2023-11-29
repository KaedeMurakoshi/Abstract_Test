#include <iostream>

#include "Enemy.h"

using namespace	std;

Enemy::Enemy(int hp, int atk) 
{
	_hp = hp;
	_maxHp = hp;
	_atk = atk;
}

void Enemy::Damage(int damage)
{
	_hp -= damage;

	if (_hp < 0) { _hp = 0; }
}

void Enemy::Play(Enemy& enemy)
{
	printf("���������^�[���J�n��������\n\n");

	// �h���N���X��PlayBase()���Ă�
	PlayBase(enemy);

	printf("���������^�[���I����������\n\n");
}