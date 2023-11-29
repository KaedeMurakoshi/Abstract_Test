#pragma once
#include"Common.h"

class Enemy
{
public:
	// 純粋仮想関数
	virtual void Attack(Enemy& enemy) = 0;	// 相手のDamage()を呼ぶ
	virtual void PlayBase(Enemy& enemy) = 0;

	Enemy(int hp, int atk);
	void Play(Enemy& enemy);	// 攻撃方法 アップキャストで呼び出す
	
	int GetHp() const{ return _hp; }
	int GetAtk() const{ return _atk; }
	void Damage(int damage);	// ダメージを受ける

protected:
	int _hp;
	int _maxHp;
	int _atk;
};

