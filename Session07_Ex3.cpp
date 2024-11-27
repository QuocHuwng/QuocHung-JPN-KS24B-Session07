#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int sochan = 0;
    printf("so chan trong mang: ");
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            sochan = 1;
        }
    }
    if (sochan == 0) {
        printf("mang khong chua s chan.\n");
    }
    return 0;
}
