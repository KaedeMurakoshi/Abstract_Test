#include "Goblin.h"
#include <iostream>

using namespace std;

void Goblin::Attack(Enemy& enemy)
{
	enemy.Damage(3);
}

void Goblin::PlayBase(Enemy& enemy)
{
    printf("ƒSƒuƒŠƒ“‚ÌUŒ‚I\n");
    Attack(enemy);   
}