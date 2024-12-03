#include <stdio.h>

int main() {
    int n, x, i, j, temp, left, right, mid, found = -1;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNhap phan tu can tim: ");
    scanf("%d", &x);

    left = 0;
    right = n-1;
    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] == x) {
            found = mid;
            break;
        }
        if(arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if(found != -1) {
        printf("Phan tu %d tim thay tai vi tri %d\n", x, found+1);
    }
    else {
        printf("Phan tu %d khong co trong mang\n", x);
    }

    return 0;
}

