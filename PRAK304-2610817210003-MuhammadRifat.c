#include <stdio.h>

int main() {
    int a;
    printf("Masukkan angka: ");
    scanf("%d", &a);

    if (a == 0)
        printf("nol\n");
    else if (a >= 1 && a <= 10)
        printf("satuan\n");
    else if (a >= 11 && a <= 19)
        printf("belasan\n");
    else if (a >= 20 && a <= 99)
        printf("puluhan\n");
    else 
        printf("Anda Menginput Melebihi Limit Bilangan\n");

    return 0;
}
    