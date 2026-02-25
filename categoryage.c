#include <stdio.h>
int main()
{
int a;
printf("enter your age\n");
scanf("%d",&a);
if(a<=12)
{
    printf("the person is child");
    
}else if(a>12&&a<=17)
{
printf("the person is teenager");
}
else if(a>=18&&a<=60)
{
printf("the person is adult");
}else
{
    printf("user is senior citizen");
}
 return 0;
}
