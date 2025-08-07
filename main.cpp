#include <stdio.h>
#include <string>
#include <chrono>
#include <iostream>

int main() {
	
	std::string a(1000000, 'a');
	std::string b(1000000, 'b');
	std::string c(1000000, 'c');
	
	// 文字をコピーして時間を計測
	// 計測開始
	auto copyStart = std::chrono::system_clock::now();
	
	b = a;

	// 計測終了
	auto copyEnd = std::chrono::system_clock::now();
	auto copyTime = std::chrono::duration_cast<std::chrono::microseconds>(copyEnd - copyStart);

	// 文字を移動して時間を計測
	// 計測開始
	auto moveStart = std::chrono::system_clock::now();

	c = std::move(a);

	// 計測終了
	auto moveEnd = std::chrono::system_clock::now();
	auto moveTime = std::chrono::duration_cast<std::chrono::microseconds>(moveEnd - moveStart);

	printf("1,000,000文字を移動とコピーで比較しました。\n");
	std::cout << "コピー：" << copyTime.count() << "μs" << std::endl;
	std::cout << "　移動：" << moveTime.count() << "μs" << std::endl;

	return 0;
}