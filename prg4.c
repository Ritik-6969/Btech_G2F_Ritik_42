#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the temperature in centigrade: \n");
    scanf("%f", &c);
    f = (9*c)/5+32;
    printf("Tempreature in fahrenheit: %f", f);
    
    return 0;
}
