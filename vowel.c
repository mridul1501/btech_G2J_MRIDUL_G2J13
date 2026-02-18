#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter any aplhabet:\n");
    scanf("%c", &ch);
    {
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        
    printf("vowel is:%c",ch);
        else
        printf("it is consonant:%c",ch);
    }   
        

    return 0;
}

