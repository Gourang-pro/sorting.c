#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Perform the bubble sort algorithm
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements at index j and j+1
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print the sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
