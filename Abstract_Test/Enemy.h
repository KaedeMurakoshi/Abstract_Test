#pragma once
class Enemy
{
public:
	// 純粋仮想関数
	virtual void Attack(Enemy& enemy) = 0;
	virtual void PlayBase(Enemy& enemy) = 0;

	void Play(Enemy& enemy);	// 攻撃方法 アップキャストで呼び出す
	void Damage(int damage);	// ダメージを受ける

protected:
	int _hp = 100;
	int _atk = 5;
};

