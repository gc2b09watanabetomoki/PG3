#include <stdio.h>
#include "Enemy.h"

Enemy enemy;

int main() {
	
	for (int i = 0; i < 3; i++) {
		enemy.Update();
	}

	return 0;
}