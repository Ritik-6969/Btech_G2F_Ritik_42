#include <stdio.h>
int main()
{
    float r, circumference, area, pie = 3.14;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&r);

    circumference = 2*pie*r;
    area = pie*r*r;

    printf("Circumference of the cirlce: %f\n", circumference);
    printf("Area of the circle: %f\n", area);

    return 0;
}
