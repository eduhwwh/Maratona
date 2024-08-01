#include <stdio.h>

int main() {
    int x;
    
    scanf("%d", &x);
    if (x % 2 == 0) {
        x++;
    }
    for (int i = 0; i < 6; i++) {
        printf("%d\n", x);
        x += 2;
    }
    return 0;
}
