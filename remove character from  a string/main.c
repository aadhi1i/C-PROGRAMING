#include <stdio.h>
#include <string.h>

int main()
{
    int i,len;
    char s[100],ch;
    printf("Enter a string : ");
    fgets(s,50,stdin);
    printf("Enter the character to remove: ");
    scanf("%c",&ch);
    
    len=strlen(s);
    
    
    for(i=0;i<len;i++)
    {
        if(s[i]==ch)
        {
            continue;
        }
        printf("%c",s[i]);
    }
    return 0;
}