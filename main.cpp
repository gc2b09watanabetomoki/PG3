#include <stdio.h>

template<typename T1,typename T2>
class Num {
public:
	// メンバ変数
	T1 num1;
	T2 num2;
	// コンストラクタ
	Num(T1 num1, T2 num2) :num1(num1), num2(num2) {	}
	// メンバ関数
	T1 Min() {
		if (num1 < num2) {
			return static_cast<T1>(num1);
		} else {
			return static_cast<T2>(num2);
		}
	}
};

int main() {
	// ６パターン
	Num<int,int> n1(4643, 893);
	Num<int,float> n2(5, 62.1f);
	Num<int,double> n3(255, 655.35);
	Num<float,float> n4(1.6f, 2.6f);
	Num<float,double> n5(20.05f, 20.04);
	Num<double, double> n6(83.1, 82.17);
	
	printf("%6d と %6d 小さいのは %6d\n",n1.num1,n1.num2,n1.Min());
	printf("%6d と %6.2f 小さいのは %6d\n",n2.num1,n2.num2, n2.Min());
	printf("%6d と %6.2lf 小さいのは %6d\n",n3.num1,n3.num2,n3.Min());
	printf("%6.2f と %6.2f 小さいのは %6.2f\n",n4.num1,n4.num2,n4.Min());
	printf("%6.2f と %6.2lf 小さいのは %6.2lf\n",n5.num1,n5.num2,n5.Min());
	printf("%6.2lf と %6.2lf 小さいのは %6.2lf\n",n6.num1,n6.num2,n6.Min());
	
	return 0;
}