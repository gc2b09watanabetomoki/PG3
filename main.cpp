#include <stdio.h>
#include <thread>
#include <functional>
#include <iostream>

void Double(int num) {
	num *= 2;
	printf("num * 2: %d\n", num);
}
void AddTwo(int num) {
	num += 2;
	printf("num + 2: %d\n", num);
}

void Print1() {
	printf("thread 1\n");
}
void Print2() {
	printf("thread 2\n");
}
void Print3() {
	printf("thread 3\n");
}

void Quadruple(int num) {
	num *= 4;
	std::cout << "thread id = " << std::this_thread::get_id() << std::endl;
	std::cout << "num * 4 =" << num << std::endl;
}
void AddFour(int num) {
	num += 4;
	std::cout << "thread id = " << std::this_thread::get_id() << std::endl;
	std::cout << "num + 4 =" << num << std::endl;
}

int main() {

	int num = 3;
	// シングルスレッドの場合
	/*
	Double(num);
	AddTwo(num);
	*/

	// マルチスレッドの場合
	/*
	std::thread th1(Double, num);
	std::thread th2(AddTwo, num);

	th1.join();
	th2.join();
	*/
	/*
	std::function<void(int)> Triple = [=](int num) {
		num *= 3;
		printf("num * 3: %d\n", num);
	};

	std::function<void(int)>AddThree = [=](int num) {
		num += 3;
		printf("num + 3: %d\n", num);
	};

	// マルチスレッドの場合（ラムダ）
	std::thread th1(Triple, num);
	std::thread th2(AddThree, num);
	*/
	/*
	std::thread th1(Quadruple, num);
	th1.join();
	std::thread th2(AddFour, num);
	th2.join();
	*/

	
	std::thread th1(Print1);
	th1.join();
	std::thread th2(Print2);
	th2.join();
	std::thread th3(Print3);
	th3.join();
	

	return 0;
}