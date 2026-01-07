/*Question: Get a string and a character from the user, find all the positions where the character is present, and print it.

Example:

string: helloetalvislearning

character: e*/


#include <stdio.h>
#include <string.h>
void findchar(char * name, char get ){
    int i =0;
    while(name[i]!='\0'){
        if(name[i]==get){
            printf("%d ",i+1);
        }
        i++;
    }
}
int main(){
    char name[30];
    fgets(name,30,stdin);
    name[strcspn(name,"\n")]='\0';
    char get;
    scanf("%c",&get);
    findchar(name,get);
}