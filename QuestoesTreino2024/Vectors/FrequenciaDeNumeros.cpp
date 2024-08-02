#include <stdio.h>

int main() {
    int MAX_VALORES = 2000;
    int N, aux, i;
    int conta[MAX_VALORES + 1] = {0}; 

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &aux);
        if (aux >= 0 && aux <= MAX_VALORES) {
            conta[aux]++;
        }
    }

    for (i = 0; i <= MAX_VALORES; i++) {
        if (conta[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, conta[i]);
        }
    }

    return 0;
}