#pragma once
#include "Enemy.h"

class Slime : public Enemy
{
public:
	Slime(int hp, int atk);
	void PlayBase(Enemy& enemy) override;
	void Attack(Enemy& enemy) override;
};

