#include "Goblin.h"
#include <iostream>

using namespace std;

Goblin::Goblin(int hp, int atk) : Enemy(hp, atk)
{

}

void Goblin::Attack(Enemy& enemy)
{
	enemy.Damage(GetAtk());
}

void Goblin::PlayBase(Enemy& enemy)
{
	if (_hp < _maxHp / 3)
	{
		int randNum = rand() % 100;

		if (randNum <= 30)
		{
			printf("ゴブリンの攻撃！\n");
			printf("痛恨の一撃！\n");
			printf("%dのダメージ\n\n", GetAtk() * 2);
			enemy.Damage(GetAtk());
			enemy.Damage(GetAtk());
		}
		else
		{
			printf("ゴブリンの攻撃！\n");
			printf("%dのダメージ\n\n", GetAtk());
			enemy.Damage(GetAtk());
		}
	}
	else
	{
		printf("ゴブリンの攻撃！\n");
		printf("%dのダメージ\n\n", GetAtk());
		enemy.Damage(GetAtk());
	}
}