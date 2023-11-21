#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000  // ���Y����

int main() {
	int dice1, dice2, total;
	int results[11] = { 0 };  // �ΨӰO���U���I�ƪ�����

	// �ϥήɶ��@���üƺؤl
	srand(time(NULL));

	// �i����Y
	for (int i = 0; i < ROLLS; i++) {
		dice1 = rand() % 6 + 1;  // ��l1���I�� (1��6)
		dice2 = rand() % 6 + 1;  // ��l2���I�� (1��6)
		total = dice1 + dice2;   // ������l���`�I��

		// ��s���G�}�C
		results[total - 2]++;
	}

	// �C�L���G
	printf("�`�I��\t�X�{����\t��ھ��v\n");

	for (int i = 0; i < 11; i++) {
		printf("%d\t%d\t\t%f\n", i + 2, results[i], (float)results[i] / ROLLS);
	}

	return 0;
}
