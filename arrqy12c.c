#include <stdio.h>

int main(void)
{
    int n, e; // Declare variables at the beginning

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &e);

    if (e > n) {
        printf("Number of elements to insert exceeds array size.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < e; i++) {
        scanf("%d", &a[i]);
    }

    int oddcnt = 0, evencnt = 0;
    for (int i = 0; i < e; i++) {
        if (a[i] % 2 == 0) {
            evencnt++;
        } else {
            oddcnt++;
        }
    }

    if (evencnt >= 2) {
        // Delete last two even numbers
        int delcnt = 0;
        for (int i = e - 1; i >= 0 && delcnt < 2; i--) {
            if (a[i] % 2 == 0) {
                for (int j = i; j < e - 1; j++) {
                    a[j] = a[j + 1];
                }
                e--;
                delcnt++;
            }
        }
    }
    else if (evencnt == 1) {
        // Insert two elements at middle
        int newelem[2];
        printf("Enter two elements to insert: ");
        for (int i = 0; i < 2; i++) {
            scanf("%d", &newelem[i]);
        }

        // Make space for new elements
        for (int i = e - 1; i >= e / 2; i--) {
            a[i + 2] = a[i];
        }

        // Insert new elements
        a[e / 2] = newelem[0];
        a[(e / 2) + 1] = newelem[1];
        e += 2;
    }
    else {
        // Delete middle element and insert one after middle
        int middle = e / 2;

        // Delete middle element
        for (int i = middle; i < e - 1; i++) {
            a[i] = a[i + 1];
        }
        e--;

        // Insert new element
        int newelem;
        printf("Enter an element to insert: ");
        scanf("%d", &newelem);

        // Make space
        for (int i = e - 1; i >= middle; i--) {
            a[i + 1] = a[i];
        }

        a[middle + 1] = newelem;
        e++;
    }

    printf("Final array: ");
    for (int i = 0; i < e; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
