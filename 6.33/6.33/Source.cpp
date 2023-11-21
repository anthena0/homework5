#include <stdio.h>

// ���j�������G���j�M���
int recursiveBinarySearch(int *array, int start, int end, int key);

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int searchKey = 6;

	// �ϥλ��j�G���j�M���
	int result = recursiveBinarySearch(arr, 0, 9, searchKey);

	if (result == -1) {
		printf("���� %d ���b�}�C�����C\n", searchKey);
	}
	else {
		printf("���� %d �b���� %d �B���C\n", searchKey, result);
	}

	return 0;
}

// ���j�������G���j�M��ƪ���{
int recursiveBinarySearch(int *array, int start, int end, int key) {
	if (start <= end) {
		int mid = start + (end - start) / 2;

		if (array[mid] == key) {
			return mid; // ���ؼЭȡA��^����
		}
		else if (array[mid] > key) {
			return recursiveBinarySearch(array, start, mid - 1, key); // �b���b�����j�M
		}
		else {
			return recursiveBinarySearch(array, mid + 1, end, key); // �b�k�b�����j�M
		}
	}

	return -1; // �����ؼЭȡA��^ -1
}
