#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area,radius;
    const double pi=3.142;

    printf("enter the radius");
    scanf("%lf",&radius);
    area=pi*radius*radius;
    printf("area=%lf",area);
    return 0;
}
