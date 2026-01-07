/*Question: Get a string using gets function and count all the words in it.

Example: string: Welcome to Etalvis Learning
Answer : 4*/



#include <stdio.h>
#include <string.h>
int count(char * name){
    int count =1;
    for (int i =0 ;name[i]!='\0' ;i++){
        if(name[i]== ' '){
            count++;
        }
    }
    return count;
}
int main(){
    char name[30];
    fgets(name, 30 , stdin);
    name[strcspn(name,"\n")]='\0';
    int c = count(name);
    printf("%d",c);
}