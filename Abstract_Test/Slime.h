#pragma once
#include "Enemy.h"

class Slime : public Enemy
{
public:
	void PlayBase(Enemy& enemy) override;
	void Attack(Enemy& enemy) override;
};

