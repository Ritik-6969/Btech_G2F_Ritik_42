#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a first number --->");
    scanf("%d",&a);
    printf("Enter a second number --->");
    scanf("%d",&b);
    printf("Enter third Number ---> ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("a is greater than b & c" "%d", a);
    }else if(b>a && b>c){
        printf("b is greater than a & c" "%d", b);
    }else
        printf(" c is greater than a & b ---> " "%d",c);
   
    return 0;
}