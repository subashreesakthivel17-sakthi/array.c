#include <stdio.h>
int main() {
    int r, c;
    int a[100][100];
    int i, j, k, l;
    scanf("%d %d", &r, &c);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
    for(k = i; k < r; k++) {
    for(l = 0; l < c; l++) {
        if(k == i && l <= j)
            continue;
        if(a[i][j] == a[k][l]) {
            printf("%d", a[i][j]);
                return 0;
}
  }
   }
    }
     }
return 0;
} 