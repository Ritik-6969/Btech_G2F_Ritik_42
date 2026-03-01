#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    
    c=a;
    a=b;
    b=c;

    printf("after swapping\n");
    printf("a=%d", a);
    printf("b=%d", b);

    return 0;

}