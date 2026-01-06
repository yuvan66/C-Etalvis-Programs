#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[51];
    fgets(a,51,stdin); 
    a[strcspn(a,"\n")]='\0';  
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=48) && (a[i]<=57))
        {
            continue;
        }  
        else
        {
            printf("Invalid");
            return 0;
        } 
    }
    printf("Valid");
}