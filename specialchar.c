#include <stdio.h>

int main()
{
    
    char ch;
    
    printf("Enter any aplhabet or digit or special charcter:\n");
    scanf("%c", &ch);
    {
  if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
  
        
    printf("it is alphabet:%c",ch);
        else if(ch>='0'&&ch<='9')
        printf("it is digit:%c",ch);
        else
        printf("it is special character");
    } 
    return 0;
}
