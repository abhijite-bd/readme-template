#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    for (i = 5; i<=20; i = i + 5)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("= %d ", sum);
}