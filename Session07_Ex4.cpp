#include <stdio.h>

int main() {
    int n;

    printf("nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("cac phan tu la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
    return 0;
}
