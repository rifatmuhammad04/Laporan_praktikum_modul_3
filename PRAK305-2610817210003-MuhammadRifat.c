#include <stdio.h>

int main() {
    int total_seconds;
    printf("masukkan total detik: ");
    scanf("%d", &total_seconds);

    int days = total_seconds / 86400;
    int rem = total_seconds % 86400;
    int hours = rem / 3600;
    rem %= 3600;
    int minutes = rem / 60;
    int seconds = rem % 60;

    if (days > 0) 
        printf("%d hari %d:%d:%d\n", days, hours, minutes, seconds);
     else 
        printf("%d:%d:%d\n", hours, minutes, seconds);

        return 0;
     }