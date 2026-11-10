#include <stdio.h>
//Insertion of an elements
int main() {
    int arr[100], n, i, element, position;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    // Shift elements to the right
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[position - 1] = element;

    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
