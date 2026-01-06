/*Question:
Write a function to concatenate two strings to another.

Function Name:
strcon(src1, src2, dst)*/
#include <stdio.h>
#include <string.h>
void strcon(char * src1,char * src2, char *dst){
    int i =0 ;
    while (src1[i]!='\0'){
        dst[i]=src1[i];
        i++;
    }
    int j =0 ;
    while (src2[j]!='\0'){
        dst[i+j]=src2[j];
        j++;
    }
    i=0 ;
    while (dst[i]!='\0'){
        printf("%c",dst[i]);
        i++;
    }

}
int main(){
    char src1[30];
    fgets(src1,30,stdin);
    src1[strcspn(src1,"\n")]='\0';
    
    char src2[30];
    fgets(src2,30,stdin);
    src2[strcspn(src2,"\n")]='\0';

    char dst[60];
    strcon(src1, src2, dst);
}