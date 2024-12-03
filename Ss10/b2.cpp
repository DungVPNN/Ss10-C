#include <stdio.h>

int main() {
    int n;
    int i;
    int j;
    int temp;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

