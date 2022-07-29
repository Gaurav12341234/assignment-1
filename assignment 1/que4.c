#include<stdio.h>
int main()
{
    float R,Area;
    printf("enter radius of circle:");
    scanf("%f",&R);
    Area=3.14*R*R;
    printf("area of circle is %.2f having the radius %.2f",Area,R);
    return 0;
}