// Online C compiler to run C program online
#include <stdio.h>

// linear search function that searches the key in an array
int linearSearch(int* arr, int size, int key)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = { 3, 4, 1, 7, 5, 8, 11, 42, 3, 13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 4;

	int index = linearSearch(arr, size, key);

	if (index == -1) {
		printf("The element is not present in the array.");
	}
	else {
		printf("The element is present at arr[%d].", index);
	}

    printf("Try programiz.pro");
	return 0;
}
