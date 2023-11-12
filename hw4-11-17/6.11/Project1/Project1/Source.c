#include <stdio.h>

// ��i�᪺Bubble Sort
void improvedBubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int swaps = 0;  // �O�������q�L���洫����
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				// �i��洫
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swaps++;
			}
		}

		// �p�G�����q�L�S���i��洫�A���e�����Ƨ�
		if (swaps == 0) {
			break;
		}
	}
}

// ��X�}�C����
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("��l�}�C�G\n");
	printArray(arr, n);

	improvedBubbleSort(arr, n);

	printf("�Ƨǫ᪺�}�C�G\n");
	printArray(arr, n);

	return 0;
}