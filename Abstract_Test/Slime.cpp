#include<iostream>
#include "Slime.h"

using namespace std;

void Slime::Attack(Enemy& enemy)
{
	enemy.Damage(1);
}

void Slime::PlayBase(Enemy& enemy)
{
	printf("�X���C���̑̓�����I\n");
	Attack(enemy);
}