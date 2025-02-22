#include <stdio.h>
#include <string.h>
int main()
{
    static int a[] = {0,1,2,3,4};
    int *p[] = {a, a+1, a+2, a+3, a+4};
    printf("%u %u %u\n",p, *p, *(*p));
    printf("%d\n",&a);
    printf("%d\n",&a[0]);
    printf("%d\n",a[0]);
    printf("%d\n",p);
    printf("%d\n",&p[0]);
    printf("%d\n",p[0]);
    return 0;
}
