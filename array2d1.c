#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int salary[R][C];

    // Read salaries
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;

    // Find highest and second highest
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int x = salary[i][j];

            if(x > max) {
                secondMax = max;
                max = x;
            }
            else if(x > secondMax && x != max) {
                secondMax = x;
            }
        }
    }

    printf("%d\n", secondMax);

    return 0;
}