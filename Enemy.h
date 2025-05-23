#pragma once

class Enemy {
public:

	void approach();
	void shoot();
	void escape();
	void Update();


private:
	static void(Enemy::* spFuncTable[])();
};
