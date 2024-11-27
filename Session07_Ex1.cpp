#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int length = 5;
    
    printf("Cac phan tu trong mang là:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nDo dai cua mang la: %d\n", length);
    return 0;
}

