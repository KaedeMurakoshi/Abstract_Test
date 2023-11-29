#pragma once
#include "Enemy.h"

class Goblin : public Enemy
{
public:
	Goblin(int hp, int atk);
	void PlayBase(Enemy& enemy) override;
	void Attack(Enemy& enemy) override;
};

