#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter your name >>");
    char s[100];
    int k;
    scanf("%s", s);
    printf("hi %s", s);
    int len = strlen(s);
    printf("\nYour name is %d letters long.\n", len);
    char compare = s[0];
    
    char c[100];
    int count=1;
    for(int i=0;i<=len;i++)
    {
        for(int j=i+1;s[j]!='\0';j++)
        {
            if(s[j] == s[i])
            {
                for(k = j; s[k] != '\0'; k++)
                {
                    s[k] = s[k + 1];
                    
                }
                // compare=s[i];
            }
            
        }
    }
    printf("\nThe Final String after Removing All Duplicates = %s ", s);
}
