#include <iostream>

#include "Enemy.h"

using namespace	std;

void Enemy::Damage(int damage)
{
	_hp -= damage;
}

void Enemy::Play(Enemy& enemy)
{
	printf("���������^�[���J�n��������\n");

	// �h���N���X��PlayBase()���Ă�
	PlayBase(enemy);

	printf("���������^�[���I����������\n");
}