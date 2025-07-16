#include <stdio.h>

int a[5], pos = -1;

void insert(int e) {
    if (pos + 1 == 5) {
        printf("Error: Array is full\n");
    } else {
        a[++pos] = e;
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
                // Swap
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Array sorted.\n");
}

int menu() {
    int ch;
    printf("\nMenu:\n");
    printf("1. Insert\n");
    printf("2. Deletee\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("5. Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}

void processArray() {
    int ch;
    for (ch = menu(); ch != 4; ch = menu()) {
        switch (ch) {
            case 1: {
                int val;
                printf("Enter the value to be inserted: ");
                scanf("%d", &val);
                insert(val);
                break;
            }
            case 2:
                deletee();
                break;
            case 3:
                display();
                break;
            case 5:
                sort();
                break;
            default:
                printf("Error: Wrong choice\n");
                break;
        }
    }
}

int main() {
    processArray();
    return 0;
}

