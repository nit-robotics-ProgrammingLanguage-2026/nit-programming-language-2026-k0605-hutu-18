#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    int i;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (i = 2; i <= n; i += 2)
    {
        total += i;
    }
    printf("%ld", total);
    return 0;
}
