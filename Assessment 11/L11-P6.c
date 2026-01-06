/*Question:
Write a funtion to copy a string to another
strcopy(src,dst)*/

#include <stdio.h>
#include <string.h>
void strcopy(char* src , char* dst){
    int i =0;
    while (src[i]!='\0'){
        dst[i]=src[i];
        printf("Copied - %c\n",dst[i]);
        i++;
    }
    dst[i]='\0';
    printf("Final string - %s",dst);
}
int main(){
    char src[30];
    char dst[30];
    fgets(src,30,stdin);
    src[strcspn(src,"\n")]='\0';
    strcopy(src,dst);
}