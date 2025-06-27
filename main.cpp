#include <iostream>
#include <list>

using namespace std;

int main() {
	
	list <const char*> eki_list{
		"Tokyo", 
		"Kanda", 
		"Akihabara", 
		"Okachimachi", 
		"Ueno", 
		"Uguisudani", 
		"Nippori", 
		// ここに西日暮里　JY08
		"Tabata", 
		"Komagome", 
		"Sugamo", 
		"Otsuka", 
		"Ikebukuro", 
		"Mejiro", 
		"Takadanobaba", 
		"Sin-Okubo", 
		"Shinjuku", 
		"Yoyogi", 
		"Harajuku", 
		"Shibuya", 
		"Ebisu", 
		"Meguro", 
		"Gotanda", 
		"Osaki", 
		"Sinagawa", 
		// ここに高輪ゲートウェイ　JY26
		"Tamachi", 
		"Hamamatsucho", 
		"Shimbashi", 
		"Yurakucho"
	};

	auto itr = eki_list.begin();
	
	// 1970年
	for (itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << " , ";
	}
	std::cout << "\n\n";
	
	// 1971年 西日暮里駅開業
	for (itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = eki_list.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	
	// 2019年
	for (itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << " , ";
	}
	std::cout << "\n\n";

	// 2020年 高輪ゲートウェイ駅開業
	for (itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = eki_list.insert(itr, "TakanawaGateway");
			++itr;
		}
	}

	// 2022年
	for (itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		std::cout << *itr << " , ";
	}
	
	

	std::cout << "\n\n";
	return 0;
}