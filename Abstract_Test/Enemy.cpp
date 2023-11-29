#include <iostream>

#include "Enemy.h"

using namespace	std;

Enemy::Enemy(int hp, int atk) 
{
	_hp = hp;
	_maxHp = hp;
	_atk = atk;
}

void Enemy::Damage(int damage)
{
	_hp -= damage;

	if (_hp < 0) { _hp = 0; }
}

void Enemy::Play(Enemy& enemy)
{
	printf("＝＝＝＝ターン開始＝＝＝＝\n\n");

	// 派生クラスのPlayBase()を呼ぶ
	PlayBase(enemy);

	printf("＝＝＝＝ターン終了＝＝＝＝\n\n");
}