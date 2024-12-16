#include <stdio.h>

int main() {

    int x = 10;       
    int *ptr = &x;   

    printf("Cach 1: Su dung bien truc tiep\n");
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %d\n",&x);

    printf("\nCach 2: Su dung con tro\n");
    printf("Gia tri cua x (qua con tro): %d\n", *ptr);
    printf("Dia chi cua x (qua con tro): %d\n",ptr);

    return 0;
}

