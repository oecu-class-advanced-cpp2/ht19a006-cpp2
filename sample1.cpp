#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */
int nth_prime(unsigned int a, unsigned int d, unsigned int n)
{
	cin >> a;//初項の入力
	cin >> d;//公差の入力
	cin >> n;//n番目の素数（何番目の素数を求めるかの入力）
	for (int i = 0; i < n; i++)
	{
		int a1 = 0;
		a1 = a + n * d;
	}
	return 0;
}


int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	return 0;
}