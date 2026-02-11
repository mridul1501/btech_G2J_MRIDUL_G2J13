#include <stdio.h>

int main()
{
    int a,b,c;
      printf("enter first number:\n");
      scanf("%d",&a);
      printf("enter second number:\n");
      scanf("%d",&b);
      printf("enter third number:\n");
    scanf("%d",&c);

    if(a>b&&a>c)
    {
    printf("a is greatest number:%d",a);
    }
    else 
    if(b>a&&b>c)
    {
    printf("b is greatest number:%d",b);
    }
    else
    {
        printf("c is greatest number:%d",c);
    }
    return 0;
}