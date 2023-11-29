#include<iostream>
#include "Slime.h"

using namespace std;

Slime::Slime(int hp, int atk) : Enemy(hp, atk)
{

}

void Slime::Attack(Enemy& enemy)
{
	enemy.Damage(1);
}

void Slime::PlayBase(Enemy& enemy)
{
	printf("ƒXƒ‰ƒCƒ€‚Ì‘Ì“–‚½‚èI\n");
	Attack(enemy);
}