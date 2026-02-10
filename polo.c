#include <stdio.h>
int main ()
{
    int a, b;
    printf("Enter the two num: ");
    scanf("%d%d", &a, &b);

    if(a<b)
    {
        printf("a is less than %d", b);
    }
    else
    {
        printf("a is greater than %d", b);
    }
    return 0;
}