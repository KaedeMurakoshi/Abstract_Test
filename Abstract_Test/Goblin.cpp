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
			printf("�S�u�����̍U���I\n");
			printf("�ɍ��̈ꌂ�I\n");
			printf("%d�̃_���[�W\n\n", GetAtk() * 2);
			enemy.Damage(GetAtk());
			enemy.Damage(GetAtk());
		}
		else
		{
			printf("�S�u�����̍U���I\n");
			printf("%d�̃_���[�W\n\n", GetAtk());
			enemy.Damage(GetAtk());
		}
	}
	else
	{
		printf("�S�u�����̍U���I\n");
		printf("%d�̃_���[�W\n\n", GetAtk());
		enemy.Damage(GetAtk());
	}
}