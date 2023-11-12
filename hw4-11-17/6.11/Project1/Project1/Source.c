#include <stdio.h>

// 改進後的Bubble Sort
void improvedBubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int swaps = 0;  // 記錄本次通過的交換次數
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				// 進行交換
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swaps++;
			}
		}

		// 如果本次通過沒有進行交換，提前結束排序
		if (swaps == 0) {
			break;
		}
	}
}

// 輸出陣列元素
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("原始陣列：\n");
	printArray(arr, n);

	improvedBubbleSort(arr, n);

	printf("排序後的陣列：\n");
	printArray(arr, n);

	return 0;
}