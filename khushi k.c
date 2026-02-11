// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main(){
int a,b,c,d,e;
int av;
printf("enter marks of five students");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
int sum=a+b+c+d+e;
printf("sum is %d\n",sum);
av=sum/5;
printf("avg is %d",av);
return 0;
}