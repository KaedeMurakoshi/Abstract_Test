// Abstract_Test.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

#include "Enemy.h"
#include "Goblin.h"
#include "Slime.h"
#include "SlimeKnight.h"

using namespace std;

bool isDead(Enemy& enemy)
{
    // HPが０ならfalseを返す
    return enemy.GetHp() <= 0;
}

void ShowStatus(Enemy& p1, Enemy& p2)
{
    printf("【スライムナイト】【ゴブちゃん】\n　    HP:%3d          HP:%3d\n\n", p1.GetHp(), p2.GetHp());
}

int main()
{
    srand(time(NULL));

    Goblin gob(40, 4);
    SlimeKnight sKnight(35, 5);

    while (true)
    {
        // スライムナイトのターン
        sKnight.Play(gob);
        ShowStatus(sKnight, gob);
        if (isDead(gob)) 
        {
            printf("勝者・・・スライムナイト！\n");
            break;
        }

        // ゴブリンのターン
        gob.Play(sKnight);
        ShowStatus(sKnight, gob);
        if (isDead(gob)) 
        { 
            printf("勝者・・・ゴブちゃん！\n"); 
            break; 
        }
    }
}

// まとめて処理したい場合
//Enemy* EnemyList[] =
//{
//    &gA, &gB, &gC, &gD
//};

//// スライムAがゴブリンA～Dに全体攻撃
//for (int i = 0; i < 4; ++i)
//{
//    sA.Attack(*EnemyList[i]);   // 参照渡しなので実体を渡す
//}