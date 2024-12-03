#include <stdio.h>

int main() {
    int n;
    int x;
    int i;
    int found = -1;
    
    printf("Nhap so phan tu cua mang ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Nhap cac phan tu cua mang\n");
    for(i = 0; i < n; i++) {
        printf("Phan tu %d ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap phan tu can tim ");
    scanf("%d", &x);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            found = i;
            break;
        }
    }
    
    if(found != -1) {
        printf("Phan tu %d co trong mang tai vi tri %d\n", x, found + 1);
    } else {
        printf("Phan tu %d khong co trong mang\n", x);
    }
    
    return 0;
}

