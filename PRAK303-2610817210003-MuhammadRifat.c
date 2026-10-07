#include <stdio.h>

int main() {
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    if (n >= 0 )
        printf("positif\n");
    else if (n <= 0)
        printf("negatif\n");

        return 0;
    }