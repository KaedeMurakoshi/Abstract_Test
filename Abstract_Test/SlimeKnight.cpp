#include<iostream>

#include "SlimeKnight.h"

using namespace std;

SlimeKnight::SlimeKnight(int hp, int atk) : Enemy(hp, atk)
{
	
}

void SlimeKnight::PlayBase(Enemy& enemy)
{
	if (_hp < _maxHp / 2)
	{
		int randNum = rand() % 100;
		if (randNum <= 20)
		{
			printf("�X���C���i�C�g�̓z�C�~���������I\n\n");

			_hp += HEAL_AMOUNT;

			if (_hp > _maxHp)
			{
				_hp = _maxHp;
			}
		}
		else
		{
			printf("�X���C���i�C�g�̂�����a��I\n");
			printf("%d�̃_���[�W\n\n", GetAtk());
			enemy.Damage(GetAtk());
		}
	}
	else
	{
		printf("�X���C���i�C�g�̂�����a��I\n");
		printf("%d�̃_���[�W\n\n", GetAtk());
		enemy.Damage(GetAtk());
	}
}

void SlimeKnight::Attack(Enemy& enemy)
{
	Attack(enemy);
}
