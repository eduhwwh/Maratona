#include <stdio.h>

int main()
{
    int N, p = 0;
    while (scanf("%d", &N) && N != 0)
    {
        int ingre[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &ingre[i]);
            if (ingre[i] == i + 1) 
            {
                p += 1;
                printf("Teste %d\n", p);
                printf("%d\n\n", ingre[i]);
            }
        }
    }
    return 0;
}