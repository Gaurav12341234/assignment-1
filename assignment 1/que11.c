#include<stdio.h>
int main()
{
    int hour,min;
    printf("user input data format is \"HH:MM\"\n");
    scanf("%d:%d",&hour,&min);
    printf("%d hour and %d minute",hour,min);
    return 0;
}