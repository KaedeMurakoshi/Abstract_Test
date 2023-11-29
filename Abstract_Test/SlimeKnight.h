#pragma once
#include "Enemy.h"

class SlimeKnight : public Enemy
{
public:
	SlimeKnight(int hp, int atk);
	void PlayBase(Enemy& enemy) override;
	void Attack(Enemy& enemy) override;
};

