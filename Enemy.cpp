#include "Enemy.h"
#include "stdio.h"

void Enemy::approach() {
	printf("enemy が 接近\n");
}
void Enemy::shoot() {
	printf("enemy の 射撃\n");
}
void Enemy::escape() {
	printf("enemy が 離脱\n");
}

void(Enemy::* Enemy::spFuncTable[])()
= {
	&Enemy::approach,	// 接近
	&Enemy::shoot,		// 射撃
	&Enemy::escape		// 離脱
};

int phase_ = 0;


void Enemy::Update() {

	//現在フェーズの関数を実行
	(this->*spFuncTable[phase_])();

	//更新
	phase_++;
	if (phase_ >= 3) {
		phase_ = 0;
	}

}

