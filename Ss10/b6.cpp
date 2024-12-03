#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    int positions[n];
    int count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            positions[count] = i + 1;
            count++;
        }
    }

    if(count > 0) {
        printf("Vi tri cua phan tu %d la: ", x);
        for(i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }
    else {
        printf("Phan tu %d khong co trong mang\n", x);
    }

    return 0;
}

