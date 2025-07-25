#include <stdio.h>
#include <thread>

void Print1() {
	printf("thread 1\n");
}
void Print2() {
	printf("thread 2\n");
}
void Print3() {
	printf("thread 3\n");
}

int main() {
	
	std::thread th1(Print1);
	th1.join();
	std::thread th2(Print2);
	th2.join();
	std::thread th3(Print3);
	th3.join();

	return 0;
}