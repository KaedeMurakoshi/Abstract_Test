#include "Goblin.h"
#include <iostream>

using namespace std;

void Goblin::Attack(Enemy& enemy)
{
	enemy.Damage(3);
}

void Goblin::PlayBase(Enemy& enemy)
{
    printf("�S�u�����̍U���I\n");
    Attack(enemy);   
}