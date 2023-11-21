#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000  // 投擲次數

int main() {
	int dice1, dice2, total;
	int results[11] = { 0 };  // 用來記錄各種點數的次數

	// 使用時間作為亂數種子
	srand(time(NULL));

	// 進行投擲
	for (int i = 0; i < ROLLS; i++) {
		dice1 = rand() % 6 + 1;  // 骰子1的點數 (1到6)
		dice2 = rand() % 6 + 1;  // 骰子2的點數 (1到6)
		total = dice1 + dice2;   // 兩顆骰子的總點數

		// 更新結果陣列
		results[total - 2]++;
	}

	// 列印結果
	printf("總點數\t出現次數\t實際機率\n");

	for (int i = 0; i < 11; i++) {
		printf("%d\t%d\t\t%f\n", i + 2, results[i], (float)results[i] / ROLLS);
	}

	return 0;
}
