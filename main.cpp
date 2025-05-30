#include <stdio.h>

// 基底クラス：動物
class Animal {
public:

	Animal() {
		
	}
	virtual ~Animal() {
		
	}

	virtual void Action() {

	}

protected:

	const char* name = nullptr;
};

// 基底クラス：動物　→　派生クラス：犬
class Dog : public Animal {
public:

	Dog() {
		printf("犬が　あらわれた！\n");
	}
	~Dog() {
		printf("犬は　にげだした！\n");
	}

	void Action() override {
		printf("犬は　しっぽをふっている\n");
	}
	

private:

};

// 基底クラス：動物　→　派生クラス：猫
class Cat : public Animal {
public:

	Cat() {
		printf("猫が　あらわれた！\n");
	}
	~Cat() {
		printf("猫は　にげだした！\n");
	}

	void Action() override {
		printf("猫は　鳴いている\n");
	}

private:

};




int main() {

	// 授業スライド内容の再利用

	Animal* animal[2];

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			animal[i] = new Dog;
		} else {
			animal[i] = new Cat;
		}
	}

	printf("\n");
	for (int i = 0; i < 2; i++) {
		animal[i]->Action();
	}


	printf("\n");
	for (int i = 0; i < 2; i++) {
		delete animal[i];
	}
	
	return 0;
}