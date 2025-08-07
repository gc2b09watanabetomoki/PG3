#include <stdio.h>
#include <string>
#include <chrono>
#include <iostream>

int main() {
	/*
	// 左辺値   右辺値
	// int i  =  1;
	
	// 右辺値参照型
	// int&& c = 1; // 左辺値と同じだけ生き残る

	// 右辺値から左辺値へのキャスト
	// std::move は左辺値を右辺値にキャストする
	//int c;
	//std::move(c);

	// 右辺値が扱えると何が嬉しいのか？
	//  コピーではなくムーブができる
	*/
	
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