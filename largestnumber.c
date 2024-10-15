
#include <stdio.h>

void main()
{
    int  a,b,c,d;
    printf("Enter the number \n");
    scanf("%d",&a);
    printf("Enter the number \n");
    scanf("%d",&b);
    printf("Enter the number \n");
    scanf ("%d",&c);
    printf("Enter the number \n");
    scanf ("%d",&d);
    if((a>b)&&(a>c)&&(a>d))
    {
    printf("largest is %d",a);
    }
    else if((c>a)&&(c>b)&&(c>d))
    {
    printf("largest is %d",c);
    }
    else
    {
    printf("largest is %d",d);
    }
    }