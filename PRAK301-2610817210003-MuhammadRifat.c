#include <stdio.h>

int main() {
    int a, b;
    printf("Masukkan Angka: ");
    int count = scanf("%d %d", &a, &b);

    if (count == 1) 
        printf("%d\n", a);
     else if (count == 2) 
        if (a > b) {
            int temp = a; a = b; b = temp;
        
        printf("%d %d\n", a, b);
    

    return 0;
}