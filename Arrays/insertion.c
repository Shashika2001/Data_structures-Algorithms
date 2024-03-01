#include <stdio.h>

#define MAX_SIZE 100

void insertAtEnd(int arr[], int *size, int element) {
    if (*size < MAX_SIZE) {
        arr[*size] = element;
        (*size)++;
        printf("Element %d inserted at the end.\n", element);
    } else {
        printf("Array is full. Cannot insert element.\n");
    }
}

int main() {
    int array[MAX_SIZE];
    int size = 0;

    // Adding some initial elements to the array
    array[size++] = 1;
    array[size++] = 2;
    array[size++] = 3;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    // Inserting an element at the end
    int elementToInsert = 4;
    insertAtEnd(array, &size, elementToInsert);

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
