#include <stdio.h>

int main() {
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    int el, found = 0;
    scanf("%d", &el);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) {
            printf("Element %d found at position %d (index %d)\n", el, i + 1, i);
            found = 1;  // Mark as found
            break;  // Exit loop after finding the element
        }
    }
    
    if (!found) {
        printf("Element %d not found in the array.\n", el);
    }

    return 0;
}

