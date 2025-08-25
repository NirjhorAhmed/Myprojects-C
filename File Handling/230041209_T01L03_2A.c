#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int y;
        scanf("%d", &y);
        if (y <= 5 - k) {
            count++;
        }
    }

    printf("%d\n", count / 3);

    return 0;
}
