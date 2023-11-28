#pragma once
#include "Enemy.h"

class Goblin : public Enemy
{
public:
	void PlayBase(Enemy& enemy) override;
	void Attack(Enemy& enemy) override;
};

