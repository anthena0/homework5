#include <stdio.h>

// 遞迴版本的二分搜尋函數
int recursiveBinarySearch(int *array, int start, int end, int key);

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int searchKey = 6;

	// 使用遞迴二分搜尋函數
	int result = recursiveBinarySearch(arr, 0, 9, searchKey);

	if (result == -1) {
		printf("元素 %d 未在陣列中找到。\n", searchKey);
	}
	else {
		printf("元素 %d 在索引 %d 處找到。\n", searchKey, result);
	}

	return 0;
}

// 遞迴版本的二分搜尋函數的實現
int recursiveBinarySearch(int *array, int start, int end, int key) {
	if (start <= end) {
		int mid = start + (end - start) / 2;

		if (array[mid] == key) {
			return mid; // 找到目標值，返回索引
		}
		else if (array[mid] > key) {
			return recursiveBinarySearch(array, start, mid - 1, key); // 在左半部分搜尋
		}
		else {
			return recursiveBinarySearch(array, mid + 1, end, key); // 在右半部分搜尋
		}
	}

	return -1; // 未找到目標值，返回 -1
}
