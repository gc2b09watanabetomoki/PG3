#include "Enemy.h"
#include "stdio.h"

void Enemy::approach() {
	printf("enemy �� �ڋ�\n");
}
void Enemy::shoot() {
	printf("enemy �� �ˌ�\n");
}
void Enemy::escape() {
	printf("enemy �� ���E\n");
}

void(Enemy::* Enemy::spFuncTable[])()
= {
	&Enemy::approach,	// �ڋ�
	&Enemy::shoot,		// �ˌ�
	&Enemy::escape		// ���E
};

int phase_ = 0;


void Enemy::Update() {

	//���݃t�F�[�Y�̊֐������s
	(this->*spFuncTable[phase_])();

	//�X�V
	phase_++;
	if (phase_ >= 3) {
		phase_ = 0;
	}

}

