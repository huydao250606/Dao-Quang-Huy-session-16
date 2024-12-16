#include <stdio.h>

int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
int main() {
    int array[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int valueToFind = 7;
    int result = findElement(array, size, valueToFind);
    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri: %d\n", valueToFind, result);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", valueToFind);
    }
    return 0;
}

