#include <iostream>

#include "Enemy.h"

using namespace	std;

void Enemy::Damage(int damage)
{
	_hp -= damage;
}

void Enemy::Play(Enemy& enemy)
{
	printf("＝＝＝＝ターン開始＝＝＝＝\n");

	// 派生クラスのPlayBase()を呼ぶ
	PlayBase(enemy);

	printf("＝＝＝＝ターン終了＝＝＝＝\n");
}