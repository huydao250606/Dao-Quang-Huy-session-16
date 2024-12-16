#include <stdio.h>

void updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        arr[position] = newValue;
    } else {
        printf("Vi tri cap nhat khong hop le!\n");
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang ban dau:\n");
    printArray(array, size);

    int newValue = 99;
    int position = 2; 
    updateElement(array, size, newValue, position);

    printf("Mang sau khi cap nhat:\n");
    printArray(array, size);

    return 0;
}

