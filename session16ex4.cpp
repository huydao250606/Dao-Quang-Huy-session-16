#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}
int main() {
    // Khai báo và gán giá tr? cho m?ng
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Cac phan tu trong mang:\n");
    printArray(array, size);

    return 0;
}

