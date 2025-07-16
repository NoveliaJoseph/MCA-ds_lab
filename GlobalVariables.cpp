#include <stdio.h>

int a[5], pos = -1;

void insert(int e) {
    if (pos + 1 == 5) {
        printf("Error: Array is full\n");
    } else {
        a[++pos] = e;
        printf("Inserted: %d\n", e);
    }
}

void deletee() {
    if (pos == -1) {
        printf("Error: Array is empty\n");
    } else {
        printf("Deleted element: %d\n", a[pos--]);
    }
}

void display() {
    if (pos == -1) {
        printf("Array is empty\n");
    } else {
        printf("Array elements: ");
        for (int i = 0; i <= pos; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

void sort() {
    if (pos == -1) {
        printf("Array is empty\n");
        return;
    }

    for (int i = 0; i <= pos; i++) {
        for (int j = 0; j < pos - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
    display(); // Display sorted array
}

int menu() {
    int ch;
    printf("\n--- Menu ---\n");
    printf("1. Insert\n");
    print
