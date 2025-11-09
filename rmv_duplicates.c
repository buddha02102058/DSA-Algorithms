#include <stdio.h>

int main() {
    int arr[100], temp[100];
    int n, i, j, k = 0;
    int isDuplicate;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        isDuplicate = 0;

        for (j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = 1; 
                break;
            }
        }
        if (!isDuplicate) {
            temp[k] = arr[i];
            k++;
        }
    }
    printf("\nArray without duplicates:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
