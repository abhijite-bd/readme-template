// #include <stdio.h>
// int main()
// {
//     int a[4] = {144, 23, 13, 4};
//     int *p = a;
//     int n = 4;
//     while (n--)
//     {
//         printf("%d ", *p);
//         p++;
//     }
// }

#include <stdio.h>
#include <stdlib.h>
struct avg
{
    double sub1, sub2, sub3;
};

int main()
{
    struct avg st1;
    st1.sub1 = 4;
    st1.sub2 = 13;
    st1.sub3 = 14;
    double result = (st1.sub1 + st1.sub2 + st1.sub3) / 3;
    printf("%lf ", result);
    int *brisi = malloc(sizeof(struct avg));
    int *brisi2 = calloc(sizeof(struct avg));
    return 0;
}
