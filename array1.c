#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int smallest = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("Largest %d\n", largest);
    printf("Smallest %d\n", smallest);

    return 0;
}