#include <iostream>

#include "Enemy.h"

using namespace	std;

void Enemy::Damage(int damage)
{
	_hp -= damage;
}

void Enemy::Play(Enemy& enemy)
{
	printf("^[Jn\n");

	// hΆNXΜPlayBase()πΔΤ
	PlayBase(enemy);

	printf("^[IΉ\n");
}