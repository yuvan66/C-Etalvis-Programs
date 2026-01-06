/*Question:
Write a function to compare two strings.
Print Success or Failure.

Function Name:
strcmp(src, dst)*/
#include <stdio.h>
#include <string.h>
int strcomp(char* src,char* dst){
    int i=0 , flag =1;
    while(src[i]!='\0'){
        if(src[i]!=dst[i]){
            flag =0;
            break;
        }
        i++;
    }
    return flag ;
}
int main(){
    char src[30];
    fgets(src,30,stdin);
    src[strcspn(src,"\n")]='\0';
    char dst[30];
    fgets(dst,30,stdin);
    dst[strcspn(dst,"\n")]='\0';
    if(strcomp(src,dst)){
        printf("Success");
    }
    else printf("Failure");
}