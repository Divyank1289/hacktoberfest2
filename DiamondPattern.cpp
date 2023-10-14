#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows (must be odd): ");
    scanf("%d", &n);

    int space = n / 2;

    for (i = 1; i <= n; i += 2) {
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        space--;
    }

    space = 1;

    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        space++;
    }

    return 0;
}
